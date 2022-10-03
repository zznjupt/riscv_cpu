#include "./csrc/monitor/monitor.cpp"

int main(int argc, char** argv) {
	init_monitor(argc, argv);
	int state = sim_main(argc, argv);
	if (state == -1) return 0;
	return state;
}