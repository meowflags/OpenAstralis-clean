// sub_4F165A0
// rva 0x04f165a0  size 439  section .text  group text
// window base 0x184f165a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F165A0(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  char *v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  _DWORD *v13; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v16; // [rsp+8h] [rbp-10h]
  char *v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 > v8[1] )
  {
    if ( a3 != v7 )
    {
      v9 = *(_DWORD *)a3 >> 3;
      if ( *(__int16 *)&v7[8 * v9 + 62] >= 4 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      if ( a3 == v7
        || (v10 = *(_DWORD *)a3 >> 3, *(__int16 *)&v7[8 * v10 + 62] < 3)
        || *(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v10 + 16] + 20] != 70135 )
      {
        v17 = a3;
        v11 = v8[5];
        if ( (unsigned __int64)(v11 + 40) > v8[4] )
        {
          v11 = sub_1EAA920(a1, a2, a3: 34107088);
        }
        else
        {
          v8[5] = v11 + 40;
          *(_DWORD *)v11 = 34107088;
          *(_DWORD *)(v11 + 4) = 0;
          *(_QWORD *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 16) = 0;
          *(_QWORD *)(v11 + 24) = 0;
          *(_QWORD *)(v11 + 32) = 0;
        }
        *(_DWORD *)(v11 + 20) = 46923644;
        *(_DWORD *)(v11 + 16) = *((_DWORD *)v7 + 93585974);
        *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - (_QWORD)v7) >> 3;
        v16 = (_DWORD *)v11;
        sub_503B9A0(a1, a2, a3: v11, a4, a5: 0);
        v12 = (unsigned __int64)v16;
        v16[2] = 43859627;
        if ( (*(_DWORD *)v12 & 2) != 0 )
        {
          a4 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - a4) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - a4) >> 9) + 0x38) = 0;
        }
        *(_DWORD *)(v12 + 12) = (unsigned __int64)(v17 - v7) >> 3;
        if ( (*(_DWORD *)v12 & 2) != 0 )
        {
          a4 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - a4) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - a4) >> 9) + 0x38) = 0;
          v13 = (_DWORD *)v12;
        }
        else
        {
          v13 = (_DWORD *)v12;
        }
      }
      else
      {
        v13 = a3;
      }
      while ( 1 )
      {
        sub_2769900(a1, a2, a3: v13, a4, a5: &a7);
LABEL_12:
        if ( *(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v9 + 16] + 24] != 81646 )
          break;
        v13 = a3;
      }
    }
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_4F16760();
}
