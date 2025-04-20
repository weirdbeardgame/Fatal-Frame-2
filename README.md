# Fatal Frame 2 Decompilation
## Description:
This is a project that aims to have a matching source decomplilation of the PlayStation 2 version of Fatal Frame 2 (Project Zero 2) with the intent of enabling research into the games source and eventually lead to a port on modern hardware.

This is based on the Project Zero 2 demo build released (2004-02-06) `SLES_523.84` that uses the same finalized source code as retail copies of the game.

## Disclaimer:
No game assets are hosted on this repository. You must provide them yourself.


## How To Build:
Ensure that the extracted ELF (A ps2 exectueable) file `SLES_523.84` exists in the config folder

## Required linux packages
### Arch:
- mips64-linux-gnu-gcc
- mips-linux-gnu-binutils


### Setup an Environment for Python
Python's virtual environments or Conda are the preferred way to use this software, as you may not be allowed to install packages globally. 

- Venv
 ```bash
    python3 -m venv .venv
    source .venv/bin/activate
    python3 -m pip install -r requirements.txt
 ```

- Conda 
```bash
    #conda create --name <my-env> # for the sake of this guide I use the name splat
    conda create --name splat
    conda install pip
    conda activate splat
    python3 -m pip install -r requirements.txt
```

### Steps to build 

- Configure project:

```bash
$ python3 configure.py -c
```

- Compile project:

```bash
$ ninja
```

- Clean compile artifacts:

```bash
$ ninja -t clean
```