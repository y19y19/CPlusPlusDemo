SDIR := src
ODIR := obj
IDIR := interface
BDIR := bin

CC = g++
CFLAGS = -I$(IDIR)

EXE := $(BDIR)/main
SRC := $(wildcard $(SDIR)/*.C)
OBJ := $(SRC:$(SDIR)/%.C=$(ODIR)/%.o)

.PHONY: all clean

all: $(EXE)
	@echo $(EXE)
	@echo $(SRC)
	@echo $(OBJ)


$(EXE): $(OBJ) | $(BDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(ODIR)/%.o: $(SDIR)/%.C | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create bin and obj folder 
$(BDIR) $(ODIR):
	mkdir -p $@

clean:
	@$(RM) -rv $(BDIR) $(ODIR)

-include $(OBJ:.o=.d)