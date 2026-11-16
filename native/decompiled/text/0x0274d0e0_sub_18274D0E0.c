// sub_18274D0E0
// rva 0x0274d0e0  size 440  section .text  group text
// window base 0x18274d0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274D0E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ebx
  double v14; // xmm0_8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18274D2A0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v8 = (unsigned int)a5[3];
      if ( (_DWORD)v8 == 0 )
        goto LABEL_7;
      v9 = v6[2 * v8] >> 3;
      if ( SHIWORD(v6[2 * v9 + 15]) >= 3 && v6[2 * v6[2 * v9 + 4] + 5] == 96283 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        v8 = sub_182757000(a1, a2, a3: a5);
LABEL_7:
        v10 = (unsigned int)a5[4];
        if ( (_DWORD)v10 != 0 )
        {
          v11 = v6[2 * v10] >> 3;
          if ( SHIWORD(v6[2 * v11 + 15]) < 4 || v6[2 * v6[2 * v11 + 4] + 6] != 88812 )
            continue;
        }
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 != 0 )
          break;
      }
      v13 = v6[2 * v12] >> 3;
      switch ( v13 )
      {
        case 4260831:
          v14 = *(double *)&v6[2 * v12 + 2];
          goto LABEL_13;
        case 4279946:
          v14 = *(float *)&v6[2 * v12 + 1];
          goto LABEL_13;
        case 4260808:
          v14 = (double)(int)v6[2 * v12 + 1];
          goto LABEL_13;
        case 4260452:
          v14 = (double)*(__int64 *)&v6[2 * v12 + 2];
          goto LABEL_13;
        case 4288437:
          v14 = (double)SLOBYTE(v6[2 * v12 + 1]);
          goto LABEL_13;
        case 4288459:
          v14 = (double)SLOWORD(v6[2 * v12 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    while ( v13 != 4288481 );
    v14 = (double)LOWORD(v6[2 * v12 + 1]);
LABEL_13:
    v15 = a6(a1, a2, a3: &v6[2 * v8], a4: &v6[2 * v10], a5: &v6[2 * v10], a6: v14);
    if ( *(int *)(v7 + 16) <= 0 )
      v15 = sub_18277F280(a1: v17, a2: v18, a3: v16);
    if ( v15 != 0 )
      JUMPOUT(0x304E961A1LL);
    return (__int64)(v6 + 8781820);
  }
}
