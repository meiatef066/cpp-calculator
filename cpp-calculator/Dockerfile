# Use an official C++ build image (GCC)
FROM gcc:latest

# Set the working directory
WORKDIR /app

# Copy the C++ source code into the container
COPY calculator.cpp .

# Compile the C++ code into an executable
RUN g++ -o calculator calculator.cpp

# Set the default command to run the compiled program
CMD ["./calculator"]
