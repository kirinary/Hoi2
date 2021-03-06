
##############################
# Country definition for DDR #
##############################

province = { id = 296 ic = 1 naval_base = 8 air_base = 5 } # ���X�g�b�N
province = { id = 300 ic = 2 air_base = 10 } # �x������
province = { id = 301 landfort = 9 } # �V���g���[���Y���g
province = { id = 309 landfort = 9 } # �R�b�g�u�X
province = { id = 310 ic = 1 air_base = 6 } # ���C�v�c�B�q
province = { id = 311 ic = 1 air_base = 4 } # �h���X�f��
province = { id = 546 landfort = 9 } # �t�����N�t���g�E�A���E�f�A�E�I�[�_�[

#####################
# Country main data #
#####################

country =
{ tag                 = DDR
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 300
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 296 297 298 299 300 301 546 84 309 310 311 }
  ownedprovinces      = { 296 297 298 299 300 301 546 84 309 310 311 }
  controlledprovinces = { 296 297 298 299 300 301 546 84 309 310 311 }
  techapps            = { 
                         1130 1230 1570 1670 1770 1870 1970
                         2010 2020 2030 2040 2050 2310 2320 2610 2620 2910 2920 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110  3310
                          3120  3210  3220  3460  3470
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50090 50100 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  6000  6010  6020  6030  6040
                          6180  6190  6400  6410
                        }
  inventions          = { }
  policy              = { democratic = 2 political_left = 9 freedom = 2 free_market = 2 professional_army = 9 defense_lobby = 10 interventionism = 9 }

#�ȉ��h�C�c���勤�a�����Ɛl���R
  landunit =
  { id       = { type = 15001 id = 1 }
    name     = "���Ɛl���R���i�ߕ������\��"
    location = 300
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 1 }
      name          = "���Ɛl���R���i�ߕ�"
      extra         = rocket_artillery
      brigade_model = 2
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 2 }
      name          = "��601��p�@����"
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 3 }
      name          = "��602��p�@����"
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 4 }
      name          = "��603��p�@����"
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 5 }
      name          = "��604��p�@����"
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 6 }
      name          = "��304�@���������"
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 7 }
      name          = "��1��ԑ��"
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 8 }
      name          = "��2��ԑ��"
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 9 }
      name          = "��3��ԑ��"
    }
  }
  landunit =
  { id       = { type = 15001 id = 2 }
    name     = "���Ɛl���R�I�[�f���R�W�c"
    location = 309
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 10 }
      name          = "���Ɛl���R�I�[�f���R�W�c�i�ߕ�"
      extra         = rocket_artillery
      brigade_model = 2
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 11 }
      name          = "��641��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 12 }
      name          = "��642��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 13 }
      name          = "��643��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 14 }
      name          = "��644��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 15 }
      name          = "��344�@���������"
      experience    = 43
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 16 }
      name          = "��12��ԑ��"
      experience    = 63
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 17 }
      name          = "��13��ԑ��"
      experience    = 61
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 18 }
      name          = "��14��ԑ��"
      experience    = 71
    }
  }
  landunit =
  { id       = { type = 15001 id = 3 }
    name     = "���Ɛl���R�i�C�Z�R�W�c"
    location = 546
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 19 }
      name          = "���Ɛl���R�i�C�Z�R�W�c�i�ߕ�"
      extra         = rocket_artillery
      brigade_model = 2
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 20 }
      name          = "��651��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 21 }
      name          = "��652��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 22 }
      name          = "��653��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 23 }
      name          = "��654��p�@����"
      experience    = 61
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 24 }
      name          = "��394�@���������"
      experience    = 43
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 25 }
      name          = "��395�@���������"
      experience    = 43
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 26 }
      name          = "��25��ԑ��"
      experience    = 33
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 27 }
      name          = "��26��ԑ��"
      experience    = 31
    }
  }
  landunit =
  { id       = { type = 15001 id = 4 }
    name     = "���Ɛl���R�������R"
    location = 301
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 28 }
      name          = "���Ɛl���R�������R�i�ߕ�"
      experience    = 88
      extra         = rocket_artillery
      brigade_model = 2
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 29 }
      name          = "��661��p�@����"
      experience    = 67
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 30 }
      name          = "��662��p�@����"
      experience    = 66
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 31 }
      name          = "��663��p�@����"
      experience    = 67
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 32 }
      name          = "��664��p�@����"
      experience    = 66
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 33 }
      name          = "��398�@���������"
      experience    = 48
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 34 }
      name          = "��399�@���������"
      experience    = 48
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 35 }
      name          = "��33��ԑ��"
      experience    = 38
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 36 }
      name          = "��34��ԑ��"
      experience    = 74
    }
  }
  landunit =
  { id       = { type = 15001 id = 5 }
    name     = "�Վ��W����p�@����n���j�o��"
    location = 301
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 37 }
      name          = "��666��p�@����"
      experience    = 100
      strength     = 22
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 38 }
      name          = "��667��p�@����"
      experience    = 67
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 4
      id            = { type = 15004 id = 39 }
      name          = "��668��p�@����"
      experience    = 67
      strength     = 33
      max_strength = 33
    }
  }
  landunit =
  { id       = { type = 15001 id = 6 }
    name     = "�����x�@�R��1��p�@�b�A��"
    location = 300
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 40 }
      name          = "�����x�@�R���R�i�ߕ�"
      experience    = 88
      extra         = rocket_artillery
      brigade_model = 2
      locked = yes
    }
    division =
    { type          = infantry
      model         = 2
      id            = { type = 15004 id = 41 }
      name          = "���F�A���H���t���"
      experience    = 90
      locked = yes
    }
    division =
    { type          = infantry
      model         = 2
      id            = { type = 15004 id = 42 }
      name          = "���@���s�[�����"
      experience    = 67
      locked = yes
    }
    division =
    { type          = infantry
      model         = 2
      id            = { type = 15004 id = 43 }
      name          = "�W�[�N�t���[�g���"
      experience    = 67
      locked = yes
    }
  }
  landunit =
  { id       = { type = 15001 id = 7 }
    name     = "��501��p�@�b���"
    location = 309
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 44 }
      name          = "��304��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 45 }
      name          = "��305��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 46 }
      name          = "��306��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
  }
  landunit =
  { id       = { type = 15001 id = 8 }
    name     = "��221��p�@�b���"
    location = 309
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 47 }
      name          = "��25��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 48 }
      name          = "��36��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 3
      id            = { type = 15004 id = 49 }
      name          = "��47��p�@����"
      experience    = 30
      strength     = 33
      max_strength = 33
    }
  }
  landunit =
  { id       = { type = 15001 id = 9 }
    name     = "�z�[�l�b�J�[�@�B���R"
    location = 546
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 50 }
      name          = "�v�����c��I�C�Q�����"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 51 }
      name          = "�z�[�G���V���^�E�t�F�����"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 52 }
      name          = "�n���W�����"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 53 }
      name          = "�X�J���f���x�O���"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 54 }
      name          = "�P���v�t���"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 55 }
      name          = "�Q�b�c�E�t�H���E�x�����q���Q�����"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 56 }
      name          = "�z���X�g�E���F�b�Z�����"
      experience    = 20
    }
  }
  landunit =
  { id       = { type = 15001 id = 10 }
    name     = "���Ɛl���R�������R"
    location = 84
    division =
    { type          = hq
      model         = 2
      id            = { type = 15004 id = 57 }
      name          = "���Ɛl���R�������R�i�ߕ�"
      experience    = 88
      extra         = rocket_artillery
      brigade_model = 2
    }
    division =
    { type          = paratrooper
      model         = 2
      id            = { type = 15004 id = 58 }
      name          = "��4��p�@����"
      experience    = 30
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 2
      id            = { type = 15004 id = 59 }
      name          = "��5��p�@����"
      experience    = 30
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 2
      id            = { type = 15004 id = 60 }
      name          = "��6��p�@����"
      experience    = 30
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
    division =
    { type          = paratrooper
      model         = 2
      id            = { type = 15004 id = 61 }
      name          = "��7��p�@����"
      experience    = 30
      extra         = rocket_artillery
      brigade_model = 2
      strength     = 33
      max_strength = 33
    }
  }
  landunit =
  { id       = { type = 15001 id = 11 }
    name     = "��7�@�B�������R"
    location = 546
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 62 }
      name          = "�p�E��������B���"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 63 }
      name          = "���[�R�V��}�[�`���[�V�����"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 64 }
      name          = "�n�C�����q��u�����h���[���"
      experience    = 20
    }
    division =
    { type          = mechanized
      model         = 2
      id            = { type = 15004 id = 65 }
      name          = "�N����x�[�����"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 66 }
      name          = "���[�g��t�B�b�V���[���"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 67 }
      name          = "�A���J�f�B��}�Y���[���"
      experience    = 20
    }
    division =
    { type          = armor
      model         = 2
      id            = { type = 15004 id = 68 }
      name          = "�G�����X�g��e�[���}�����"
      experience    = 20
    }
  }
  navalunit =
  { id       = { type = 15102 id = 6 }
    name     = "�l���C�R"
    location = 296
    base     = 296
    division =
    { type  = battleship
      model = 3
      id    = { type = 15105 id = 43 }
      name  = "Karl Marx"
    }
    division =
    { type  = escort_carrier
      model = 5
      id    = { type = 15105 id = 44 }
      name  = "Peenemunde"
    }
    division =
    { type  = battlecruiser
      model = 5
      id    = { type = 15105 id = 45 }
      name  = "Hertha"
    }
    division =
    { type  = battlecruiser
      model = 5
      id    = { type = 15105 id = 46 }
      name  = "Freya"
    }
    division =
    { type  = battlecruiser
      model = 5
      id    = { type = 15105 id = 47 }
      name  = "Vineta"
    }
    division =
    { type  = battlecruiser
      model = 5
      id    = { type = 15105 id = 48 }
      name  = "Hansa"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 49 }
      name  = "�g����1��"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 50 }
      name  = "�g����2��"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 51 }
      name  = "�g����3��"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 52 }
      name  = "�g����4��"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 53 }
      name  = "�g����5��"
    }
    division =
    { type  = transport
      model = 4
      id    = { type = 15105 id = 54 }
      name  = "�g����6��"
    }
  }
  airunit =
  { location = 300
    id       = { type = 14501 id = 1 }
    name     = "��801�q��퓬�c"
    base     = 300
    division =
    { id       = { type = 14500 id = 1 }
      name     = "��61�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 2 }
      name     = "��62�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 3 }
      name     = "��63�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 4 }
      name     = "��64�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
  }
  airunit =
  { location = 300
    id       = { type = 14501 id = 2 }
    name     = "��1��p�C������"
    base     = 300
    division =
    { id       = { type = 14500 id = 5 }
      name     = "��1��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 6 }
      name     = "��2��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 7 }
      name     = "��3��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 8 }
      name     = "��4��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 296
    id       = { type = 14501 id = 3 }
    name     = "��2��p�C������"
    base     = 296
    division =
    { id       = { type = 14500 id = 9 }
      name     = "��5��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 10 }
      name     = "��6��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 11 }
      name     = "��7��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 12 }
      name     = "��8��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 310
    id       = { type = 14501 id = 4 }
    name     = "��3��p�C������"
    base     = 310
    division =
    { id       = { type = 14500 id = 13 }
      name     = "��9��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 14 }
      name     = "��10��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 15 }
      name     = "��11��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 16 }
      name     = "��12��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 311
    id       = { type = 14501 id = 5 }
    name     = "��4��p�C������"
    base     = 311
    division =
    { id       = { type = 14500 id = 17 }
      name     = "��13��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 18 }
      name     = "��14��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 19 }
      name     = "��15��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 20 }
      name     = "��16��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 66
    id       = { type = 14501 id = 6 }
    name     = "��5��p�C������"
    base     = 66
    division =
    { id       = { type = 14500 id = 21 }
      name     = "��17��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 22 }
      name     = "��18��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 23 }
      name     = "��19��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 24 }
      name     = "��20��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 67
    id       = { type = 14501 id = 7 }
    name     = "��6��p�C������"
    base     = 67
    division =
    { id       = { type = 14500 id = 25 }
      name     = "��21��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 26 }
      name     = "��22��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 27 }
      name     = "��23��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 28 }
      name     = "��24��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 75
    id       = { type = 14501 id = 8 }
    name     = "��7��p�C������"
    base     = 75
    division =
    { id       = { type = 14500 id = 29 }
      name     = "��25��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 30 }
      name     = "��26��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 31 }
      name     = "��27��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 32 }
      name     = "��28��p�C������"
      strength = 100
      type     = flying_bomb
      model    = 2
    }
  }
  airunit =
  { location = 300
    id       = { type = 14501 id = 9 }
    name     = "��802�q��퓬�c"
    base     = 300
    division =
    { id       = { type = 14500 id = 33 }
      name     = "��65�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 34 }
      name     = "��66�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 35 }
      name     = "��67�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 36 }
      name     = "��68�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
  }
  airunit =
  { location = 300
    id       = { type = 14501 id = 10 }
    name     = "��803�q��퓬�c"
    base     = 300
    division =
    { id       = { type = 14500 id = 37 }
      name     = "��69�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 38 }
      name     = "��70�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 39 }
      name     = "��71�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 40 }
      name     = "��72�퓬�w�����"
      strength = 100
      type     = cas
      model    = 2
    }
   }
  airunit =
  { location = 300
    id       = { type = 14501 id = 11 }
    name     = "��12�����q��c"
    base     = 300
    division =
    { id       = { type = 14500 id = 41 }
      name     = "��1�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 42 }
      name     = "��2�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 43 }
      name     = "��3�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 44 }
      name     = "��4�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
   }
  airunit =
  { location = 300
    id       = { type = 14501 id = 12 }
    name     = "��15�����q��c"
    base     = 300
    division =
    { id       = { type = 14500 id = 45 }
      name     = "��5�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 46 }
      name     = "��6�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 47 }
      name     = "��7�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 48 }
      name     = "��8�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
   }
  airunit =
  { location = 300
    id       = { type = 14501 id = 13 }
    name     = "��19�����q��c"
    base     = 300
    division =
    { id       = { type = 14500 id = 49 }
      name     = "��9�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 50 }
      name     = "��10�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 51 }
      name     = "��11�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 52 }
      name     = "��12�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
   }
  airunit =
  { location = 300
    id       = { type = 14501 id = 14 }
    name     = "��21�����q��c"
    base     = 300
    division =
    { id       = { type = 14500 id = 53 }
      name     = "��13�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 54 }
      name     = "��14�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 55 }
      name     = "��15�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 56 }
      name     = "��16�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
   }
  airunit =
  { location = 300
    id       = { type = 14501 id = 15 }
    name     = "��23�����q��c"
    base     = 300
    division =
    { id       = { type = 14500 id = 57 }
      name     = "��17�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 58 }
      name     = "��18�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 59 }
      name     = "��19�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
    division =
    { id       = { type = 14500 id = 60 }
      name     = "��20�����q���"
      strength = 100
      type     = tactical_bomber
      model    = 2
    }
   }
}