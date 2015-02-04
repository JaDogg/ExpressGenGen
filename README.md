# ExpressGenGen
ExpressGenGen an Express Code Generator Generator

## Compiling

### Requirements
* BOOST 1.57
* `BOOST_ROOT` set to boost install(extracting is sufficent) path 
* LUA 5.3.0
* `LUA_ROOT` set to `<lua_extracted>\src`, same path should also contain `liblua.a`

#### Installing Requirements

```
wget http://sourceforge.net/projects/boost/files/boost/1.57.0/boost_1_57_0.tar.gz/download -O boost_1_57_0.tar.gz
tar xvf boost_1_57_0.tar.gz 
export BOOST_ROOT=<extracted_dir>
wget http://www.lua.org/ftp/lua-5.3.0.tar.gz
tar xvf lua-5.3.0.tar.gz
export LUA_ROOT=<extracted_dir>/src
cd $LUA_ROOT 
make generic
```

### How To

* CMakeLists.txt - to use with cmake

```
mkdir build 
cd build 
cmake ..
make
```
* xgengen.pro, boost.pri, deployment.pri - to use with qmake

Use Qt creator and compile it

## How It Works ?
![How It Works](http://lookpic.com/O/i2/1887/XPbfhaFj.png "How It Works")

## Usage

* ExpressGenGen's binary is `xgengen` or `xgengen.exe`

* First get it built or use a prebuilt version

* ExpressGenGen uses `STDIN` and `STDOUT` for communication

### Python output on `*nix`

```
cat template.txt | xgengen python > gen.py
chmod a+x gen.py
./gen.py > output.txt
```

### Web output on windows

```
type template.txt | xgengen.exe web > out.html
start out.html
```

### Lua Version Check on `*nix`

Lua target is capable of running the generated code by itself 

```
echo 'Hello ExpressGenGen using :=> "{$$_VERSION$$}"' | xgengen lua
```
or 
```
echo 'Hello ExpressGenGen using :=> "{$$_VERSION$$}"' | xgengen
```
(default is lua)

### Bash Piped Execution on `*nix`

```
cat ./samples/lang_bash_CMakeLists.txt | xgengen bash | bash -
```
