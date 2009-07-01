CCFLAGS += $(shell pkg-config --cflags efreet-mime)
CLIBS += $(shell pkg-config --libs efreet-mime)

all: testmime

testmime: testmime.c
	$(CC) -o $@ $(CFLAGS) $(CCFLAGS) $^ $(LDFLAGS) $(LIBS) $(CLIBS)

clean:
	-rm -f testmime

