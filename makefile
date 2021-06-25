#C++ compiler
CC = g++

#Directories
SRCDIR = src
HDRDIR = hdr
OBJDIR = obj

#Other variables
TARGET = ChessGame
MAIN = main
OTHERS = Board Square Piece Pawn

#Useful definitions
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(MAIN) $(OTHERS)))

#The rules
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(@D)
	$(CC) -c $< -o $@ -I $(HDRDIR)

run:
	./$(TARGET)

clean:
	$(RM) -r $(TARGET) $(OBJDIR)
