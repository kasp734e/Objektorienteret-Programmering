class Resource {
  private:
    int value_;
  
  public:
    explicit Resource(const int value) : value_{value} {}
    int get_value() const {
      return value_;
    }
};

