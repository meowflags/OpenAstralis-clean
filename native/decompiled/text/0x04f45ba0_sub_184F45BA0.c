// sub_184F45BA0
// rva 0x04f45ba0  size 62  section .text  group text
// window base 0x184f45ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F45BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  _QWORD v15[2]; // [rsp+0h] [rbp-18h] BYREF
  int v16; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F45BE0(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v14, a7);
  }
  else
  {
    v15[1] = a3;
    v16 = a5;
    result = sub_184F45EE0(a1, a2, a3, a4: (unsigned int)a5, a5, a6: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
