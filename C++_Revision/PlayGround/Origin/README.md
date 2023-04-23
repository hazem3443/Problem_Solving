# Origin Template For C++ Project

this project is a template for a C++ project it is for those who seek modular architectur that is compliant with **CI/CD tools specially github**

## Table of Contents

- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Requirements

- C++23 compiler
- Boost library (version 1.77.0 or higher) for running unit tests

## Installation

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Create a build directory: mkdir build && cd build
4. Generate the build files: cmake ..
5. Build the project: make
6. Run the executable: ./main
7. To run the unit tests, navigate to the build directory and run: ./Solutions_test

## Usage

To use this project, simply include the **romanToInt.h** header file in your C++ code and create an instance of the Roman class. Call the **ToInt** method with a Roman numeral string as the argument to convert it to an integer.

```C++
#include <iostream>
#include <romanToInt.h>

int main()
{
    Roman R;
    int num = R.romanToInt("MCMXCIV");
    std::cout << num << std::endl;
    return 0;
}
```

also you can find an example of simple main at **main.cpp** you can check that

## Contributing

We welcome contributions to this Template Project! Here are some ways you can get involved:

### Bug Reports :lady_beetle

If you come across a bug or issue with Origin Template that can affect the modularity, maintainability, simplicity or even fast engaging with such template, please submit a detailed bug report. Be sure to include:

- A clear and descriptive title
- Steps to reproduce the issue
- Expected and actual behavior
- Any relevant error messages or log output
- Your operating system and version of this template project

### Feature Requests :sunny:

If you have an idea for a new feature or improvement to this template, please submit a feature request. Be sure to include:

- A clear and descriptive title
- A description of the feature or improvement
How the feature or improvement would benefit [Project Name] users

### Pull Requests :heart_on_fire:

We welcome pull requests from anyone who wants to contribute to this template. Before submitting a pull request, please:

- Fork the repository and create your own branch
- Make your changes and ensure that the code builds and passes all tests
- Write tests to cover your changes
- Submit a pull request and include a clear and detailed description of the changes you've made

### Code of Conduct :wave:

We expect all contributors to watch and star this repo for this project. This includes being respectful and welcoming to all members of the community.

### Getting Help

If you need help with this template or stuck at any step, please refer to [@Hazem](https://www.linkedin.com/in/hazem-khaled-90898315a/) and the README file, or open an issue.

## License

MIT License 2.0, see [LICENSE](./LICENSE).
