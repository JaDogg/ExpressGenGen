# ExpressGenGen
ExpressGenGen an Express Code Generator Generator

## Compiling

### Requirements
* BOOST 1.57
* LUA 5.3.0
* `BOOST_ROOT` set to boost install path 

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


