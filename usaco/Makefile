# Compiler settings
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wshadow -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
# DEBUG_FLAGS = -g -fsanitize=address,undefined -D_FORTIFY_SOURCE=2
DEBUG_FLAGS = -g -D_FORTIFY_SOURCE=2
RELEASE_FLAGS = -O2

# Task name
TASK = task

# Targets
.PHONY: all clean run test debug release $(TASK)

all: $(TASK)

$(TASK): $(TASK).cpp
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $< -o $@

debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: clean $(TASK)

release: CXXFLAGS += $(RELEASE_FLAGS)
release: clean $(TASK)

run: $(TASK)
	./$(TASK)

test: $(TASK)
	@if [ -f $(TASK).in ]; then \
		./$(TASK) < $(TASK).in > $(TASK).out; \
		echo "Output written to $(TASK).out"; \
		echo "Input:"; \
		cat $(TASK).in; \
		echo "Output:"; \
		cat $(TASK).out; \
	else \
		./$(TASK); \
	fi

clean:
	rm -f $(TASK)
