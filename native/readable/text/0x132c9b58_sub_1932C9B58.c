// sub_132C9B58
// rva 0x132c9b58  size 661  section .text  group text
// window base 0x1932c9b58: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9B58()
{
  int v5; // ebp
  bool v7; // zf
  int v12; // edi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // r11d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+20h] [rbp+8h]

  _RAX = 0;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1;
  v7 = ((unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RDX ^ 0x49656E69) == 0;
  __asm { cpuid }
  v12 = _RCX;
  if ( v7
    && ((v13 = _RAX & 0xFFF3FF0, MEMORY[0x336fe8]/* 0x336fe8 */ = 0x8000, MEMORY[0x336ff0]/* 0x336ff0 */ = -1, v13 == 67264)
     || v13 == 132704
     || v13 == 132720
     || (unsigned int)(v14 = v13 - 198224) <= 0x20 && (v15 = 0x100010001LL, _bittest64(&v15, (unsigned __int8)v14))) )
  {
    v16 = MEMORY[0x337e18]/* 0x337e18 */ | 1;
    MEMORY[0x337e18]/* 0x337e18 */ |= 1u;
  }
  else
  {
    v16 = MEMORY[0x337e18]/* 0x337e18 */;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v5 >= 7 )
  {
    _RAX = 7;
    __asm { cpuid }
    v18 = _RDX;
    v17 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      MEMORY[0x337e18]/* 0x337e18 */ = v16 | 2;
    if ( (int)_RAX >= 1 )
    {
      _RAX = 7;
      __asm { cpuid }
      v19 = _RDX;
    }
    _RAX = 36;
    if ( v5 >= 36 )
    {
      __asm { cpuid }
      v20 = _RBX;
    }
  }
  v36 = MEMORY[0x336fd8]/* 0x336fd8 */ & 0xFFFFFFFFFFFFFFFELL;
  MEMORY[0x336fe0]/* 0x336fe0 */ = 1;
  MEMORY[0x336fe4]/* 0x336fe4 */ = 2;
  MEMORY[0x336fd8]/* 0x336fd8 */ &= ~1uLL;
  if ( (v12 & 0x100000) != 0 )
  {
    v36 &= ~0x10uLL;
    MEMORY[0x336fe0]/* 0x336fe0 */ = 2;
    MEMORY[0x336fd8]/* 0x336fd8 */ = v36;
    MEMORY[0x336fe4]/* 0x336fe4 */ = 6;
  }
  if ( (v12 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v41 = v36;
    if ( (v12 & 0x10000000) == 0 || (v36 & 6) != 6 )
    {
LABEL_32:
      if ( (v19 & 0x200000) != 0 && (*(_QWORD *)&v41 & 0x80000LL) != 0 )
        MEMORY[0x336fd8]/* 0x336fd8 */ &= ~0x80uLL;
      return 0;
    }
    v37 = MEMORY[0x336fe4]/* 0x336fe4 */ | 8;
    MEMORY[0x336fe0]/* 0x336fe0 */ = 3;
    MEMORY[0x336fe4]/* 0x336fe4 */ |= 8u;
    if ( (v17 & 0x20) != 0 )
    {
      MEMORY[0x336fe0]/* 0x336fe0 */ = 5;
      MEMORY[0x336fe4]/* 0x336fe4 */ = v37 | 0x20;
      v38 = MEMORY[0x336fd8]/* 0x336fd8 */ & 0xFFFFFFFFFFFFFFFDLL;
      MEMORY[0x336fd8]/* 0x336fd8 */ &= ~2uLL;
      if ( (v17 & 0xD0030000) != 0xD0030000 )
      {
LABEL_26:
        if ( (v18 & 0x800000) != 0 )
          MEMORY[0x336fd8]/* 0x336fd8 */ = v38 & 0xFFFFFFFFFEFFFFFFLL;
        if ( (v19 & 0x80000) != 0 && (v41 & 0xE0) == 0xE0 )
        {
          MEMORY[0x337e14]/* 0x337e14 */ = v20 & 0x400FF;
          v39 = MEMORY[0x336fd8]/* 0x336fd8 */ & ~(HIWORD(v20) & 6 | 0x1000029LL);
          MEMORY[0x336fd8]/* 0x336fd8 */ = v39;
          if ( (unsigned __int8)v20 > 1u )
            MEMORY[0x336fd8]/* 0x336fd8 */ = v39 & 0xFFFFFFFFFFFFFFBFLL;
        }
        goto LABEL_32;
      }
      if ( (v41 & 0xE0) == 0xE0 )
      {
        MEMORY[0x336fe4]/* 0x336fe4 */ |= 0x40u;
        v38 = MEMORY[0x336fd8]/* 0x336fd8 */ & 0xFFFFFFFFFFFFFFDBLL;
        MEMORY[0x336fe0]/* 0x336fe0 */ = 6;
        MEMORY[0x336fd8]/* 0x336fd8 */ &= 0xFFFFFFFFFFFFFFDBLL;
        goto LABEL_26;
      }
    }
    v38 = MEMORY[0x336fd8]/* 0x336fd8 */;
    goto LABEL_26;
  }
  return 0;
}
