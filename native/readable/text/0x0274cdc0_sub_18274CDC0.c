// sub_274CDC0
// rva 0x0274cdc0  size 252  section .text  group text
// window base 0x18274cdc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274CDC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, _QWORD, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_19;
  if ( a5 == v6
    || a5[2] != 2
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0
    && (v10 = v6[2 * v9] >> 3,
        a2 = v6[2 * v10 + 11] & (0xD4Cu >> HIBYTE(v6[2 * v10 + 11])),
        (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2] != 3404)
    || (_DWORD)(v11 = (unsigned int)a5[4]) == 0 )
  {
LABEL_18:
    sub_2756FC0();
LABEL_19:
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274CEC0();
  }
  v12 = v6[2 * v11] >> 3;
  switch ( v12 )
  {
    case 4260808:
      v13 = v6[2 * v11 + 1];
LABEL_9:
      a6(a1, a2, a3, a4: v13, a5: &v6[2 * v9], a6: v13);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280(a1: v15, a2: v16, a3: v14);
      return (__int64)v6;
    case 4288437:
      v13 = SLOBYTE(v6[2 * v11 + 1]);
      goto LABEL_9;
    case 4288459:
      v13 = SLOWORD(v6[2 * v11 + 1]);
      goto LABEL_9;
    case 4288481:
      v13 = LOWORD(v6[2 * v11 + 1]);
      goto LABEL_9;
    default:
      goto LABEL_18;
  }
}
