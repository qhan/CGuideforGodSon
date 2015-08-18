all:
	latex main.tex
	-bibtex main
	latex main.tex
	gbk2uni main.out
	latex main.tex
	dvipdfmx main.dvi


