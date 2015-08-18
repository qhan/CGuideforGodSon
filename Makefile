part:
	gbk2uni main.out
	latex main.tex
	dvipdfm main.dvi
	xpdf main.pdf

all:
	latex main.tex
	-bibtex main
	latex main.tex
	gbk2uni main.out
	latex main.tex
	dvipdfm main.dvi
	acroread main.pdf

clean:
	-find -name '*.aux' -exec rm {} \;
	-find -name '*.bak' -exec rm {} \;
	-find -name '*.dvi' -exec rm {} \;
	-find -name '*~' -exec rm {} \;
	-find -name 'ChangeLog' -exec rm {} \;
	-find -name '*.out' -exec rm {} \;
	-rm *.bbl *.blg *.log *.ps *.thm *.toc *.toe *.lof *.lot
	-rm _region_.tex
	-rm -rf auto
	-rm -rf ./body/auto
	-rm -rf ./reference/auto
	-rm -rf ./setup/auto
	-rm -rf *.prv

clean-cvs-really:
	-find -name 'CVS' -exec rm -rf {} \;