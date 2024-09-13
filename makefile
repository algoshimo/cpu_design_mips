decoder3to8:
	verilator --cc src/decoder3to8.v --exe test/test_decoder3to8.cpp
	make -j -C obj_dir/ -f Vdecoder3to8.mk Vdecoder3to8
	obj_dir/Vdecoder3to8

encoder8to3:
	verilator --cc src/encoder8to3.v --exe test/test_encoder8to3.cpp
	make -j -C obj_dir/ -f Vencoder8to3.mk Vencoder8to3
	obj_dir/Vencoder8to3