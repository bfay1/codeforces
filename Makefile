# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wshadow -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
# DEBUG_FLAGS = -g -fsanitize=address,undefined -D_FORTIFY_SOURCE=2
DEBUG_FLAGS = -g -D_FORTIFY_SOURCE=2
RELEASE_FLAGS = -O2

# File names
SRC = task.cpp
TEST_IN = input.txt
TEST_OUT = output.txt
EXEC = task

# Targets
.PHONY: all clean run test debug release

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $< -o $@

debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: clean $(EXEC)

release: CXXFLAGS += $(RELEASE_FLAGS)
release: clean $(EXEC)

run: $(EXEC)
	./$(EXEC)

test: $(EXEC)
	@if [ -f $(TEST_IN) ]; then \
		./$(EXEC) < $(TEST_IN) > $(TEST_OUT); \
		echo "Output written to $(TEST_OUT)"; \
		echo "Input:"; \
		cat $(TEST_IN); \
		echo "Output:"; \
		cat $(TEST_OUT); \
	else \
		./$(EXEC); \
	fi

clean:
	rm -f $(EXEC)

# Create new solution file if it doesn't exist
init:
	@if [ ! -f $(SRC) ]; then \
		echo '#include <bits/stdc++.h>' > $(SRC); \
		echo 'using namespace std;' >> $(SRC); \
		echo '' >> $(SRC); \
		echo 'void solve() {' >> $(SRC); \
		echo '    ' >> $(SRC); \
		echo '}' >> $(SRC); \
		echo '' >> $(SRC); \
		echo 'int main() {' >> $(SRC); \
		echo '    cin.tie(nullptr)->sync_with_stdio(false);' >> $(SRC); \
		echo '    int t;' >> $(SRC); \
		echo '    cin >> t;' >> $(SRC); \
		echo '    while (t--) solve();' >> $(SRC); \
		echo '    return 0;' >> $(SRC); \
		echo '}' >> $(SRC); \
		echo "Created new $(SRC) with template"; \
	else \
		echo "$(SRC) already exists"; \
	fi
