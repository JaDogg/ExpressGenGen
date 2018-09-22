# ExpressGenGen
ExpressGenGen an Express Code Generator Generator

## Compiling

### Requirements
* BOOST 1.57
* `BOOST_ROOT` set to boost install(extracting is sufficent) path 
* LUA 5.3.0
* `LUA_ROOT` set to `<lua_extracted>\src`, same path should also contain `liblua.a`

#### Installing Requirements

```bash
wget http://sourceforge.net/projects/boost/files/boost/1.57.0/boost_1_57_0.tar.gz/download -O boost_1_57_0.tar.gz
tar xvf boost_1_57_0.tar.gz 
export BOOST_ROOT=<extracted_dir>
# you need to build BOOST
# and the program_options library should be in $BOOST_ROOT/stage/lib
# if it is in a diffrerent name copy it and rename it.
wget http://www.lua.org/ftp/lua-5.3.0.tar.gz
tar xvf lua-5.3.0.tar.gz
export LUA_ROOT=<extracted_dir>/src
cd $LUA_ROOT 
make generic
```

### How To

* CMakeLists.txt - to use with cmake

```bash
mkdir build 
cd build 
cmake ..
make
```

## How It Works ?
![How It Works](http://lookpic.com/O/i2/1887/XPbfhaFj.png "How It Works")

## Information

* ExpressGenGen's binary is `xgengen` or `xgengen.exe`
* First get it built or use a prebuilt version
* ExpressGenGen uses `STDIN` and `STDOUT` for communication

## How do I execute `xgengen` ?

* **Note:** All `*nix` examples should work on Windows with minor modifications 
* **Note:** All Windows examples should work on `*nix` with minor modifications 
* **Real power of ExpressGenGen comes with PIPE**

### Python output on `*nix`

```bash
cat template.txt | xgengen python > gen.py
chmod a+x gen.py
./gen.py > output.txt
```

### Web output on Windows

```bash
type template.txt | xgengen.exe web > out.html
start out.html
```

### Lua Version Check on `*nix`

Lua target is capable of running the generated code by itself 

```bash
echo 'Hello ExpressGenGen using :=> "{$$_VERSION$$}"' | xgengen lua
```
or 
```bash
echo 'Hello ExpressGenGen using :=> "{$$_VERSION$$}"' | xgengen
```
(default is lua)

### Bash Piped Execution on `*nix`

```bash
cat ./samples/lang_bash_CMakeLists.txt | xgengen bash | bash -
```

### Python Piped Execution on `*nix`

```bash
cat /samples/lang_python_Hello.txt | xgengen python | python
```
