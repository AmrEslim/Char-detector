# Char-detector (Handwritten Digit Recognition)

A Qt-based desktop application that uses a neural network to recognize handwritten digits and characters. This project implements a complete machine learning pipeline with a graphical user interface for training, testing, and evaluating neural network models.

## Features

- **Neural Network Implementation**: Custom C++ neural network with backpropagation
- **Interactive GUI**: Qt-based interface for model training and testing
- **Real-time Training Visualization**: Progress tracking and error plotting during training
- **Model Persistence**: Save and load trained models
- **EMNIST Dataset Support**: Compatible with Extended MNIST dataset for character recognition
- **Periodic Testing**: Automated testing during training to monitor performance
- **Visual Feedback**: Display input images and predictions in the interface

## Technologies Used

- **C++17**: Core implementation language
- **Qt 6.5.2**: GUI framework and application structure
- **QCustomPlot**: Real-time plotting for training metrics
- **Google Test**: Unit testing framework
- **CMake**: Build system

## Project Structure

```
├── Matrix.h/cpp           # Matrix operations for neural network
├── Neuronal_Network.h/cpp # Neural network implementation
├── mainwindow.h/cpp       # Main GUI application
├── trainmodelworker.h/cpp # Background training worker thread
├── qcustomplot.h/cpp      # Plotting library for visualizations
├── UNIT_TEST/             # Unit tests using Google Test
└── build-*/               # Build directories
```

## Getting Started

### Prerequisites

- Qt 6.5.2 or later
- CMake 3.16 or later
- C++17 compatible compiler (MSVC 2019, GCC, or Clang)
- EMNIST dataset (for training)

### Building the Project

1. **Clone the repository**
   ```bash
   git clone https://github.com/AmrEslim/Char-detector.git
   cd Char-detector
   ```

2. **Open in Qt Creator**
   - Open the project file in Qt Creator
   - Configure the build kit (Desktop Qt 6.5.2)
   - Build the project

3. **Alternative: Command Line Build**
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

### Running the Application

1. Launch the executable from Qt Creator or the build directory
2. Load your EMNIST dataset using the interface
3. Configure neural network parameters
4. Train the model and monitor progress
5. Test the model on new data

## Usage

### Training a Model

1. **Load Data**: Import EMNIST training and test datasets
2. **Configure Network**: Set up neural network architecture
3. **Start Training**: Click "Train Model" to begin training
4. **Monitor Progress**: Watch real-time error plots and epoch updates
5. **Save Model**: Save the trained model for future use

### Testing and Evaluation

1. **Load Model**: Import a previously trained model
2. **Test Data**: Run evaluation on test dataset
3. **Periodic Testing**: Enable automatic testing during training
4. **View Results**: See prediction accuracy and confusion metrics

### Model Management

- **Save Model**: Export trained neural network weights
- **Load Model**: Import previously saved models
- **Model Comparison**: Test different architectures and parameters

## Neural Network Architecture

The project implements a feedforward neural network with:
- Configurable hidden layers
- Sigmoid activation functions
- Backpropagation learning algorithm
- Customizable learning rate and momentum
- Batch processing capabilities

## Dataset Format

The application expects EMNIST dataset format:
- Input: 28x28 pixel images flattened to 784-dimensional vectors
- Labels: Integer class labels for digits/characters
- Normalization: Pixel values normalized to [0,1] range

## Testing

Run the unit tests to verify functionality:

```bash
cd UNIT_TEST
mkdir build && cd build
cmake ..
make
./tests
```

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## Performance

- **Training Speed**: Optimized matrix operations for fast training
- **Memory Usage**: Efficient data structures for large datasets
- **Accuracy**: Achieves competitive recognition rates on EMNIST
- **Real-time**: Responsive GUI during training and testing

## Known Issues

- Large datasets may require significant memory
- Training time depends on network size and dataset size
- Qt version compatibility required for proper GUI rendering

## Future Enhancements

- [ ] Convolutional Neural Network implementation
- [ ] GPU acceleration support
- [ ] Additional dataset formats
- [ ] Export to other ML frameworks
- [ ] Advanced visualization features
- [ ] Mobile platform support


## Acknowledgments

- EMNIST Dataset creators
- Qt Framework team
- QCustomPlot library
- Google Test framework
- Contributors and testers

## Author

**Amr Eslim** - [@AmrEslim](https://github.com/AmrEslim)

---

*This project was developed as part of a Machine Learning course (MPT-23) demonstrating practical neural network implementation and GUI development.*
