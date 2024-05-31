# PDF4U

## Compilation

- Install latest Qt & mupdf

```bash
brew install qt mupdf
```

- Clone the source code

```bash
git clone https://github.com/ivaquero/pdf4u.git
cd pdf4u
git submodule update --init --recursive
```

- Compile pdf4u

```bash
cd ..
mkdir build
cd build
cmake ..
make
```
