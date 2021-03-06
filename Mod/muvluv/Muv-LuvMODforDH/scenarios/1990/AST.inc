
##############################
# Country definition for AST #
##############################

province =
{ id       = 1666
  ic       = 1
  air_base = { size = 1 current_size = 1 }
  anti_air = 1
}            # ���G
province =
{ id         = 1670
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
}              # �R�R�|
province =
{ id         = 1677
  ic         = 3
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
  oilpool    = 50
  supplypool = 50
}              # �|�[�g�����X�r�[
province = { id = 1696 anti_air = 2 coastalfort = 1 ic = 5 } # �^�E���Y�r��
province =
{ id         = 1703
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  ic         = 1
}              # �_�[�E�B��
province =
{ id          = 1711
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 1
}               # �p�[�X
province =
{ id         = 1715
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  ic         = 7
}              # �j���[�L���b�X��
province = { id = 1718 anti_air = 2 ic = 3 } # �A�f���[�h
province =
{ id          = 1722
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 6
}               # �u���X�x��
province =
{ id          = 1723
  anti_air    = 3
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 2
  ic          = 8
}               # �V�h�j�[
province =
{ id          = 1727
  anti_air    = 2
  coastalfort = 1
  air_base    = { size = 2 current_size = 2 }
  naval_base  = { size = 4 current_size = 4 }
  ic          = 9
}               # �L�����x��
province =
{ id          = 1730
  anti_air    = 2
  coastalfort = 1
  naval_base  = { size = 4 current_size = 4 }
  air_base    = { size = 4 current_size = 4 }
  ic          = 5
}               # �����{����

#####################
# Country main data #
#####################

country =
{ tag                 = AST
  manpower            = 340
  energy              = 3500
  metal               = 5800
  rare_materials      = 3400
  oil                 = 6000
  supplies            = 8000
  money               = 400
  capital             = 1727
  regular_id          = U91
  transports          = 500
  escorts             = 300
  nationalprovinces   = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729
                        }
  ownedprovinces      = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  controlledprovinces = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  techapps            = { 10050 1010  10150 10190 1020  10200 10210 1030  10390 1040  10440 10490 1110  1120  1130  1210  1220  1550  1560  1570 
                          1650  1660  1850  1860  1870  1950  3010  3020  3030  3110  3120  3130  3460  3470  3810  3910  3920  3930  4390  4400 
                          4410  4480  4560  50020 50030 50040 50070 50080 50090 5010  50100 50110 5020  50290 50300 5090  5100  5170  5180  5250 
                          5330  5410  5420  5430  5460  5600  5610  5620  5760  5910  5920  7010  80080
                          80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8880  8890  8900  8910  8920  9010  9020  9030  9040  9050 
                          9190  9200  9340  9350  9360  9370  9380  9520  9530  9670  9680  9690  9700  9840  4010  4020  4030 
                          4040  4050  4110  4120  4130  4140  4150  4210  4220  4230  4240  4250
                          4640  4650  4660  4670  4680  4820  4830  4840  4850  4860  40000 40010 40020 40030 40040 2010  2020  2030  2040  2050
                          2060  2070  2080
                          6050  6060  6070  6080  6090  6260  6270  6520  6530
                        }
  policy              = { democratic = 9 political_left = 2 freedom = 8 free_market = 8 professional_army = 7 defense_lobby = 7 interventionism = 6 }
  inventions             = { 8006 }
  landunit =
  { id       = { type = 1501 id = 4279 }
    name     = "��1�R�c"
    location = 1666
    home     = 1666
    division =
    { id            = { type = 1501 id = 4281 }
      name          = "��1�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4282 }
    name     = "��2�R�c"
    location = 1670
    home     = 1670
    division =
    { id            = { type = 1501 id = 4284 }
      name          = "��2�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4285 }
    name     = "��3�R�c"
    location = 1677
    home     = 1677
    division =
    { id            = { type = 1501 id = 4287 }
      name          = "��3�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4288 }
    name     = "��4�R�c"
    location = 1711
    home     = 1711
    division =
    { id            = { type = 1501 id = 4290 }
      name          = "��4�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4291 }
    name     = "��5�R�c"
    location = 1703
    home     = 1703
    division =
    { id            = { type = 1501 id = 4293 }
      name          = "��5�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4294 }
    name     = "��6�R�c"
    location = 1696
    home     = 1696
    division =
    { id            = { type = 1501 id = 4296 }
      name          = "��6�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4297 }
    name     = "��7�R�c"
    location = 1718
    home     = 1718
    division =
    { id            = { type = 1501 id = 4299 }
      name          = "��7�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4300 }
    name     = "��8�R�c"
    location = 1722
    home     = 1722
    division =
    { id            = { type = 1501 id = 4302 }
      name          = "��8�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4303 }
    name     = "��9�R�c"
    location = 1715
    home     = 1715
    division =
    { id            = { type = 1501 id = 4305 }
      name          = "��9�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4306 }
    name     = "��10�R�c"
    location = 1729
    home     = 1729
    division =
    { id            = { type = 1501 id = 4308 }
      name          = "��10�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4309 }
    name     = "��11�R�c"
    location = 1723
    home     = 1723
    division =
    { id            = { type = 1501 id = 4311 }
      name          = "��1�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4312 }
      name          = "��2�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4313 }
    name     = "��12�R�c"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4315 }
      name          = "��3�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4316 }
      name          = "��4�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4317 }
    name     = "��13�R�c"
    location = 1730
    home     = 1730
    division =
    { id            = { type = 1501 id = 4319 }
      name          = "��5�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4320 }
      name          = "��6�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4321 }
    name     = "��14�R�c"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4323 }
      name          = "��1���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4324 }
      name          = "��2���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4325 }
      name          = "��3���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4326 }
    name     = "��15�R�c"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4328 }
      name          = "��1�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4329 }
      name          = "��2�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4330 }
      name          = "��3�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4341 }
    name     = "��18�R�c"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4343 }
      name          = "��5��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4344 }
      name          = "��6��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4345 }
      name          = "��6�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4346 }
    name     = "��19�R�c"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4348 }
      name          = "��7��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4349 }
      name          = "��8��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4350 }
      name          = "��7�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2371 }
    name     = "�I�[�X�g�����A�C�R ��1�͑�"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4351 }
      name     = "HMAS Australia"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4352 }
      name     = "HMAS Shropshire"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4353 }
      name     = "HMAS Canberra"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4354 }
      name     = "HMAS Darwin"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4355 }
      name     = "HMAS Newcastle"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4356 }
      name     = "HMAS Perth"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4357 }
      name     = "HMAS Sydney"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4358 }
      name     = "HMAS Hobart"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4359 }
      name     = "HMAS Brisbane"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4360 }
      name     = "HMAS Adelaide"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4361 }
      name     = "HMAS Encounter"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4362 }
      name     = "HMAS Protector"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4363 }
      name     = "HMAS Moresby"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4364 }
      name     = "HMAS Alice Springs"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4365 }
      name     = "HMAS Wagga Wagga"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4366 }
      name     = "HMAS Cooktown"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4367 }
      name     = "HMAS Bataan"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4368 }
      name     = "HMAS Arunta"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4369 }
      name     = "HMAS Warramunga"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4370 }
      name     = "HMAS Anzac"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4371 }
      name     = "HMAS Voyager"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4372 }
      name     = "HMAS Vendetta"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4373 }
      name     = "HMAS Vampire"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4374 }
      name     = "HMAS Waterhen"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4375 }
      name     = "HMAS Duchess"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4376 }
      name     = "HMAS Quadrant"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4377 }
      name     = "HMAS Queensborough"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4378 }
      name     = "HMAS Quiberon"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4379 }
      name     = "HMAS Quickmatch"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2372 }
    name     = "�I�[�X�g�����A�C�R ��1�A���͑�"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4380 }
      name     = "HMAS Kurumba"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4381 }
      name     = "HMAS Cerebrus"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4382 }
      name     = "HMAS Lae"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2373 }
    name     = "�I�[�X�g�����A�C�R ��1�A���͑�"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4383 }
      name     = "HMAS Oxley"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4384 }
      name     = "HMAS Otway"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4385 }
      name     = "HMAS Ovens"
      model    = 2
      type     = submarine
      strength            = 100
    }
  }
}
