EXEC=test


IDIR=include 
CC=g++
CPPFLAGS=-I$(IDIR) -Wall -std=c++11 -g

SDIR=source
ODIR=obj

FILES=$(wildcard $(SDIR)/*.cpp)
OBJFILES=$(subst .cpp,.o,$(FILES))



main: $(OBJFILES) moveofiles
	$(CC) $(CPPFLAGS) $(wildcard $(ODIR)/*.o) -o $(EXEC)


%.o: $(SDIR)/%.cpp $(OBJFILES)
	$(CC) $(CPPFLAGS) -c $<

makeodir:
	@mkdir -p $(ODIR)

moveofiles: makeodir
	@mv $(OBJFILES) $(ODIR)

clean:
	rm -f obj/*.o
	rm -f $(EXEC)
