import hid


class MacroPad:


    def __init__(self):

        self.device = hid.device()



        self.device.open(
            0xFEED,
            0x6060
        )


        print(
            "MacroPad Connected"
        )



    def read(self):

        return self.device.read(32)