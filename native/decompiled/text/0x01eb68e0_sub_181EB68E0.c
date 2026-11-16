// sub_181EB68E0
// rva 0x01eb68e0  size 254  section .text  group text
// window base 0x181eb68e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB68E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi

  MEMORY[0x181594200](a1, a2, a3: v3 + 376612472);
  MEMORY[0x181594C40](a1: v6, a2: v7, a3: v3 + 376658192, a4: v5, a5: a3);
  MEMORY[0x1815A0340](a1: v8, a2: v9, a3: v3 + 376613976);
  *(_QWORD *)(v3 + 376178840) = MEMORY[0x181DF4FA0]();
  v12 = MEMORY[0x1820808C0](a1: v10, a2: v11, a3: v3 + 376658208);
  if ( v12 != 0 )
    *(_DWORD *)(v3 + 376195596) = 2;
  else
    *(_DWORD *)(v3 + 376195596) = 1;
  __faststorefence();
  if ( v12 == 0 )
    return 11;
  result = sub_181EB6B00(a1: 0, a2: v14, a3, a4: v13, a5: 1, a6: 0);
  if ( (_DWORD)result == 0 )
  {
    MEMORY[0x18277A0A0](a1: v17, a2: v18, a3: v4, a4: v16, a5: v3 + 376658232, a6: 1);
    v19 = *(_DWORD *)(v4 + 320);
    v20 = v19 - 1;
    *(_DWORD *)(v4 + 320) = v20;
    sub_181EB82C0(a1: v21, a2: v22, a3: v19, a4: v20, a5: (unsigned int)v20);
    return 0;
  }
  return result;
}
