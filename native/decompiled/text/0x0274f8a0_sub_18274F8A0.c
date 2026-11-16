// sub_18274F8A0
// rva 0x0274f8a0  size 173  section .text  group text
// window base 0x18274f8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274F8A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18274F960();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v8 = (unsigned int)a5[3];
      if ( (_DWORD)v8 == 0 )
        goto LABEL_7;
      v9 = v6[2 * v8] >> 3;
      if ( SHIWORD(v6[2 * v9 + 15]) >= 2 && v6[2 * v6[2 * v9 + 4] + 4] == 8163 )
        goto LABEL_7;
    }
    do
    {
      v8 = sub_182757000(a1, a2, a3: a5);
LABEL_7:
      v10 = (unsigned int)a5[4];
      if ( (_DWORD)v10 == 0 )
        break;
      a4 = v6[2 * v10] >> 3;
    }
    while ( (_DWORD)a4 != 4766857 );
    v11 = a6(a1, a2, a3: &v6[2 * v8], a4, a5: &v6[2 * v10]);
    if ( *(int *)(v7 + 16) <= 0 )
      v11 = sub_18277F280(a1: v13, a2: v14, a3: v12);
    if ( v11 != 0 )
      JUMPOUT(0x304E9891ELL);
    return (__int64)(v6 + 8781820);
  }
}
