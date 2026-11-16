// sub_505B880
// rva 0x0505b880  size 166  section .text  group text
// window base 0x18505b880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_505B880(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v4 + 8) )
  {
    v16 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = (unsigned __int16)*(_DWORD *)(v3
                                   + 8LL * *(unsigned int *)(v3 + 8LL * (*a3 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44)
                                    & (0x1ECEu >> HIBYTE(*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44))))
                                   + 12);
  if ( (_DWORD)v5 != 7886 )
  {
LABEL_7:
    v16 = a3;
    sub_2770780();
    goto LABEL_8;
  }
  if ( *a3 >> 3 != 5414848 )
  {
LABEL_8:
    sub_276FC00(a1, a2, a3, a4: v5, a5: v3 + 43319120);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_505B940(a1: v13, a2: v14, a3: v12);
    return;
  }
  v16 = a3;
  v6 = (char *)sub_505E800();
  sub_50595C0(a1: v8, a2: v9, a3: v6, a4: v7, a5: v10, a6: v11, a7: v15);
  if ( *(int *)(v4 + 16) <= 0 )
    sub_277F280();
}
