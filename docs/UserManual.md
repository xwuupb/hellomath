---
title: `hellomath` User Manual
author: Xin Wu
date: 30.12.2019
---

# Introduction

`hellomath` demonstrates a not-so-simple development template by
using GNU Autotools.

A not-so-simple development template contains:

* Deployment of an external library, e.g. libm, is checked.
* `hellomath` has its own static library, e.g. libhm, which will be built.
* Doxygen is used for source documentation generation.

# Build

```bash
autoreconf -i; ./configure; make; sudo make install
```
