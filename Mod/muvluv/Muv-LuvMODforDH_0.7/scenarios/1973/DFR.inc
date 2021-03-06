##############################
# Country definition for DFR #
##############################
province =
{ id       = 296
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # ���X�g�b�N
province =
{ id       = 298
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # �}�O�f�u���N
province =
{ id       = 300
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # �x������
province =
{ id            = 302
  anti_air      = 1
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 4 current_size = 4 }
}                 # �V���e�b�e�B��
province =
{ id         = 303
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
}              # �_���c�B�q
province =
{ id         = 304
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # �G���r���N
province = { id = 305 anti_air = 1 } # �v�E�H�c�N
province =
{ id         = 306
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # �O�f�B�j��
province = { id = 307 anti_air = 1 } # �g����
province = { id = 308 anti_air = 2 landfort = 2 } # ���[�[���b�c
province =
{ id              = 310
  anti_air        = 1
  air_base        = { size = 4 current_size = 4 }
}                   # ���C�v�c�B�q
province =
{ id       = 312
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # �j�������x���N
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # �t�����N�t���g�E�A���E�}�C��
province =
{ id       = 314
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # �V���b�c�g�K���g
province = { id = 76 anti_air = 2 } # �f���b�Z���h���t
province =
{ id         = 80
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # ���B���w�����X�n�[�t�F��
province =
{ id       = 81
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # �~�����X�^�[
province =
{ id       = 82
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # �J�b�Z��
province =
{ id         = 87
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 8 current_size = 8 }
}              # �u���[����
province =
{ id         = 88
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
}              # �n���u���N
province = { id = 89 anti_air = 1 } # �����[�x�b�N
province =
{ id         = 90
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # �L�[��
#####################
# Country main data #
#####################

country =
{ tag                 = DFR
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 75
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 66 67 74 75 76 80 81 82 83 85 86 87 88 89 90 312 313 314 315 374 375 376 547 970 989 1014 1015 1016 1018 1405 }
  ownedprovinces      = { 66 67 74 75 76 80 81 82 83 85 86 87 88 89 90 312 313 314 315 374 375 376 547 970 989 1014 1015 1016 1018 1405 }
  controlledprovinces = { 66 67 74 75 76 80 81 82 83 85 86 87 88 89 90 312 313 314 315 374 375 376 547 970 989 1014 1015 1016 1018 1405 }
  techapps            = { 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50120 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000 2000  2210  3000  4000  5000
                        }
  inventions          = { }
  policy =
  { democratic        = 10
    political_left    = 2
    freedom           = 9
    free_market       = 9
    professional_army = 9
    defense_lobby     = 10
    interventionism   = 9
  }
landunit = {
	name = "��1���b�t�c"
	id = { type = 10010 id = 1 }
	location = 86
	division = {
	id = { type = 10010 id = 2 }
	name = "��1���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 3 }
	name = "��2���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 4 }
	name = "��3���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 5 }
	name = "��1���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 6 }
	name = "��2���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 7 }
	name = "��3���b���e�����"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "��3���b�t�c"
	id = { type = 10010 id = 8 }
	location = 87
	division = {
	id = { type = 10010 id = 9 }
	name = "��4���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 10 }
	name = "��5���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 11 }
	name = "��6���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 12 }
	name = "��4���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 13 }
	name = "��5���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 14 }
	name = "��6���b���e�����"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "��7���b�t�c"
	id = { type = 10010 id = 15 }
	location = 67
	division = {
	id = { type = 10010 id = 16 }
	name = "��7���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 17 }
	name = "��8���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 18 }
	name = "��9���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 19 }
	name = "��7���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 20 }
	name = "��8���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 21 }
	name = "��9���b���e�����"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
    landunit = {
	name = "��5���b�t�c"
	id = { type = 10010 id = 22 }
	location = 1018
	division = {
	id = { type = 10010 id = 23 }
	name = "��10���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 24 }
	name = "��11���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 25 }
	name = "��12���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 26 }
	name = "��10���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 27 }
	name = "��11���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 28 }
	name = "��12���b���e�����"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
    landunit = {
	name = "��12���b�t�c"
	id = { type = 10010 id = 29 }
	location = 547
	division = {
	id = { type = 10010 id = 30 }
	name = "��13���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 31 }
	name = "��14���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 32 }
	name = "��15���b���"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 33 }
	name = "��13���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 34 }
	name = "��14���b���e�����"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10010 id = 35 }
	name = "��15���b���e�����"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "��6���b���e���t�c"
	id = { type = 10010 id = 43 }
	location = 90
	division = {
	id = { type = 10010 id = 44 }
	name = "��16���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 45 }
	name = "��17���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 46 }
	name = "��16���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 47 }
	name = "��17���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 48 }
	name = "��18���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 49 }
	name = "��19���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��11���b���e���t�c"
	id = { type = 10010 id = 50 }
	location = 80
	division = {
	id = { type = 10010 id = 51 }
	name = "��18���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 52 }
	name = "��19���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 53 }
	name = "��20���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 54 }
	name = "��21���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 55 }
	name = "��22���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 56 }
	name = "��23���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��4���b���e���t�c"
	id = { type = 10010 id = 57 }
	location = 375
	division = {
	id = { type = 10010 id = 58 }
	name = "��20���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 59 }
	name = "��21���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 60 }
	name = "��24���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 61 }
	name = "��25���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 62 }
	name = "��26���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 63 }
	name = "��27���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��10���b���e���t�c"
	id = { type = 10010 id = 64 }
	location = 314
	division = {
	id = { type = 10010 id = 65 }
	name = "��22���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 66 }
	name = "��23���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 67 }
	name = "��28���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 68 }
	name = "��29���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 69 }
	name = "��30���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 70 }
	name = "��31���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��12���b���e���t�c"
	id = { type = 10010 id = 71 }
	location = 547
	division = {
	id = { type = 10010 id = 72 }
	name = "��24���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 73 }
	name = "��25���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 74 }
	name = "��32���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 75 }
	name = "��33���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 76 }
	name = "��34���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 77 }
	name = "��35���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��2���t�c"
	id = { type = 10010 id = 78 }
	location = 313
	division = {
	id = { type = 10010 id = 79 }
	name = "��26���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 80 }
	name = "��27���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 81 }
	name = "��36���b���e�����"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 82 }
	name = "��37���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 83 }
	name = "��38���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 84 }
	name = "��39���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
landunit = {
	name = "��1�R�x�t�c"
	id = { type = 10010 id = 85 }
	location = 376
	division = {
	id = { type = 10010 id = 86 }
	name = "��28���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 87 }
	name = "��1�R�x�������"
	type = mechanized
	model = 21
	experience = 0
	}
	division = {
	id = { type = 10010 id = 88 }
	name = "��2�R�x�������"
	type = mechanized
	model = 21
	experience = 0
	}
	division = {
	id = { type = 10010 id = 89 }
	name = "��3�R�x�������"
	type = mechanized
	model = 21
	experience = 0
	}
	division = {
	id = { type = 10010 id = 90 }
	name = "��40���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10010 id = 91 }
	name = "��41���b���e�����"
	type = mechanized
	model = 1
	experience = 0
	}
}
  ##��51���c �L�[��
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5001 }
    name = "��512�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5002 }
    name = "��513��ԑ��"
    strength = 100
    type = armor
    model = 2
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5003 }
    name = "��514�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5004 }
    name = "��515��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��61���c �L�[��
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5005 }
    name = "��613��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5006 }
    name = "��614�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5007 }
    name = "��615�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  ##��52���c �n�m�[�t�@�[
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5008 }
    name = "��522�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5009 }
    name = "��523��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5010 }
    name = "��524�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5011 }
    name = "��525��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��62���c �n�m�[�t�@�[
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5012 }
    name = "��623��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5013 }
    name = "��624�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5014 }
    name = "��625�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  ##��53���c �f���b�Z���h���t
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5015 }
    name = "��532�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5016 }
    name = "��533��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5017 }
    name = "��534�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5018 }
    name = "��535��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��63���c �f���b�Z���h���t
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5019 }
    name = "��633��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5020 }
    name = "��634�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5021 }
    name = "��635�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  ##��54���c �}�C���c
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5022 }
    name = "��542�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5023 }
    name = "��543��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5024 }
    name = "��544�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5025 }
    name = "��545��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��64���c �}�C���c
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5026 }
    name = "��643��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5027 }
    name = "��644�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5028 }
    name = "��645�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  ##��55���c �V���g�D�b�g�K���g
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5029 }
    name = "��552�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5030 }
    name = "��553��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5031 }
    name = "��554�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5032 }
    name = "��555��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��65���c �}�C���c
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5033 }
    name = "��652��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5034 }
    name = "��653�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5035 }
    name = "��654�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  ##��56���c �~�����w��
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5036 }
    name = "��561�@�b���e�����"
    strength = 100
    type = mechanized
    model = 2
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5037 }
    name = "��562�@�b���e�����"
    strength = 100
    type = mechanized
    model = 2
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5038 }
    name = "��563��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5039 }
    name = "��564��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  ##��66���c �~�����w��
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5040 }
    name = "��663��ԑ��"
    strength = 100
    type = armor
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5041 }
    name = "��664�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
  landdivision = {
    dormant = yes
    id = { type = 10010 id = 5042 }
    name = "��665�@�b�����"
    strength = 100
    type = mechanized
    model = 1
  }
}
