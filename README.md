Nmap [![Build Status](https://travis-ci.org/nmap/nmap.svg?branch=master)](https://travis-ci.org/nmap/nmap) [![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/nmap/nmap.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/nmap/nmap/context:cpp) [![Language grade: Python](https://img.shields.io/lgtm/grade/python/g/nmap/nmap.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/nmap/nmap/context:python) [![Total alerts](https://img.shields.io/lgtm/alerts/g/nmap/nmap.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/nmap/nmap/alerts/)
====

Nmap is released under a custom license, which is based on (but not compatible
with) GPLv2. The Nmap license allows free usage by end users, and we also offer
a commercial license for companies that wish to redistribute Nmap technology
with their products. See [Nmap Copyright and Licensing](https://nmap.org/book/man-legal.html)
for full details.

The latest version of this software as well as binary installers for Windows,
macOS, and Linux (RPM) are available from
[Nmap.org](https://nmap.org/download.html)

Full documentation is also available
[on the Nmap.org website](https://nmap.org/docs.html).

Questions and suggestions may be sent to
[the Nmap-dev mailing list](https://nmap.org/mailman/listinfo/dev).

Installing
----------
Ideally, you should be able to just type:

	brew install openssl@1.1.1
	brew install libssh2 # do not uninstall
	rm /Users/username/Downloads/nmap-7.91/nping/configure
	export PATH=/usr/local/opt/openssl@1.1/bin:$PATH
    ./configure --with-openssl=/usr/local/opt/openssl@1.1/  --with-libssl-prefix=/usr/local/Cellar/libssh2/1.9.0_1
    make
    make install

For far more in-depth compilation, installation, and removal notes, read the
[Nmap Install Guide](https://nmap.org/book/install.html) on Nmap.org.

Using Nmap
----------
Nmap has a lot of features, but getting started is as easy as running `nmap
scanme.nmap.org`. Running `nmap` without any parameters will give a helpful
list of the most common options, which are discussed in depth in [the man
page](https://nmap.org/book/man.html). Users who prefer a graphical interface
can use the included [Zenmap front-end](https://nmap.org/zenmap/).

Contributing
------------
Information about filing bug reports and contributing to the Nmap project can
be found in the [HACKING](HACKING) and [CONTRIBUTING.md](CONTRIBUTING.md)
files.
