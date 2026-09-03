extern "C" int kernel_init();

extern "C" {

void boot() {
    kernel_init();
}

}