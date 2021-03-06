

Wiki on P2Pool: 

https://en.bitcoin.it/wiki/P2Pool

Requirements:
-------------------------
Generic:
* MediterraneanCoin >=0.8.5
* Python >=2.6
* Twisted >=10.0.0
* python-argparse (for Python =2.6)

Linux:
* sudo apt-get install python-zope.interface python-twisted python-twisted-web
* sudo apt-get install python-argparse # if on Python 2.6

Windows:
* Install Python 2.7: http://www.python.org/getit/
* Install Twisted: http://twistedmatrix.com/trac/wiki/Downloads
* Install Zope.Interface: http://pypi.python.org/pypi/zope.interface/3.8.0
* Install python win32 api: http://sourceforge.net/projects/pywin32/files/pywin32/Build%20218/
* Install python win32 api wmi wrapper: https://pypi.python.org/pypi/WMI/#downloads
* Unzip the files into C:\Python27\Lib\site-packages


Requirements:
-------------------------
In order to run P2Pool with the MediterraneanCoin network, you would need to build and install the
medcoin_hybrid module that includes the HybridScryptHash256 proof of work code that MediterraneanCoin uses for hashes.

Linux:

note: if running on a fresh Ubuntu machine, you will need also the following packages:
sudo aptitude install build-essential python2.7-dev

    cd medcoin_hybrid
    sudo python setup.py install


Windows (mingw):
* Install MinGW: http://www.mingw.org/wiki/Getting_Started
* Install Python 2.7: http://www.python.org/getit/

In bash type this:

    cd medcoin_hybrid
    C:\Python27\python.exe setup.py build --compile=mingw32 install

Windows (microsoft visual c++)
* Open visual studio console

In bash type this:

    SET VS90COMNTOOLS=%VS110COMNTOOLS%	           # For visual c++ 2012
    SET VS90COMNTOOLS=%VS100COMNTOOLS%             # For visual c++ 2010
    cd medcoin_hybrid
    C:\Python27\python.exe setup.py build --compile=mingw32 install


Running P2Pool with MediterraneanCoin:
-------------------------
To use P2Pool with MediterraneanCoin, follow these instructions:

1 - you must be running your own local mediterraneancoind or mediterraneancoin-qt with -server option.
Also, allow the daemon to complete the download of the complete blockchain before starting the pool.


2 - then, run P2Pool with the "--net mediterraneancoin" option:

    python run_p2pool.py --net mediterraneancoin
    
P2Pool for MediterraneanCoin listens to its peers on port 9374; if you are behind a router, forward port 9374 to the host running P2Pool (in order to be reached by the other peers of P2Pool)

3 - start mcproxy with the following options:

    java -jar mcproxy.jar -p 9375 
    
4 - start the modified cgminer:

    cgminer -o http://localhost:8080 -u test -p test -Q 0
    
or the modified bfgminer:

    sudo ./bfgminer --submit-stale -o http://localhost:8080 -u test -p x -Q 0 -S all -T --verbose












Running P2Pool:
-------------------------
To use P2Pool, you must be running your own local bitcoind. For standard
configurations, using P2Pool should be as simple as:

    python run_p2pool.py

Then run your miner program, connecting to 127.0.0.1 on port 9332 with any
username and password.

If you are behind a NAT, you should enable TCP port forwarding on your
router. Forward port 9333 to the host running P2Pool.

Run for additional options.

    python run_p2pool.py --help

Donations towards further development:
-------------------------
    1HNeqi3pJRNvXybNX4FKzZgYJsdTSqJTbk

Official wiki :
-------------------------
https://en.bitcoin.it/wiki/P2Pool

Alternate web front end :
-------------------------
* https://github.com/hardcpp/P2PoolExtendedFrontEnd

Notes for Litecoin:
=========================
Requirements:
-------------------------
In order to run P2Pool with the Litecoin network, you would need to build and install the
ltc_scrypt module that includes the scrypt proof of work code that Litecoin uses for hashes.

Linux:

    cd litecoin_scrypt
    sudo python setup.py install

Windows (mingw):
* Install MinGW: http://www.mingw.org/wiki/Getting_Started
* Install Python 2.7: http://www.python.org/getit/

In bash type this:

    cd litecoin_scrypt
    C:\Python27\python.exe setup.py build --compile=mingw32 install

Windows (microsoft visual c++)
* Open visual studio console

In bash type this:

    SET VS90COMNTOOLS=%VS110COMNTOOLS%	           # For visual c++ 2012
    SET VS90COMNTOOLS=%VS100COMNTOOLS%             # For visual c++ 2010
    cd litecoin_scrypt
    C:\Python27\python.exe setup.py build --compile=mingw32 install
	
If you run into an error with unrecognized command line option '-mno-cygwin', see this:
http://stackoverflow.com/questions/6034390/compiling-with-cython-and-mingw-produces-gcc-error-unrecognized-command-line-o






 
