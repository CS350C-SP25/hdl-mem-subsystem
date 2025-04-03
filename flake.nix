# flake.nix
{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs {
        inherit system;
        config.allowUnfree = true;
      };

      # Define your Python environment with packages
      pythonEnv = pkgs.python311.withPackages (p: [
        p.numpy
        p.tensorflow
        p.pytorch
        p.pip
      ]);
    in
    {
      devShells.${system}.default = pkgs.mkShell {
        # Native build inputs end up on PATH and in the environment
        nativeBuildInputs = [
          pythonEnv

          pkgs.yosys
          pkgs.nextpnrWithGui
          pkgs.icestorm
          pkgs.verilator
          pkgs.verible
          pkgs.ccache
          pkgs.gcc

          pkgs.iverilog
          pkgs.gtkwave

          pkgs.universal-ctags
          pkgs.quartus-prime-lite

          pkgs.kdiff3
        ];

        # Optionally, you can specify additional environment variables, etc.
        # For example, you might want to point to a special python path:
        #   PYTHONPATH = [ "${pythonEnv}/lib/python3.11/site-packages" ];
      };
    };
}
