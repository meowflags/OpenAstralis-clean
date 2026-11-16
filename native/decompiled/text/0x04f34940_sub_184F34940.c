// sub_184F34940
// rva 0x04f34940  size 154  section .text  group text
// window base 0x184f34940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F34940(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  _QWORD v18[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v18 <= *(_QWORD *)(v9 + 8) )
  {
    v18[1] = a5;
    v19 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v8 )
  {
    v10 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v10 != 0 )
      return sub_184F3499C(a1: *(_DWORD *)(v8 + 8 * v10 + 8) >> *(_BYTE *)(a5 + 12), a2, a3, a4: a3, a5, a6: 0, a7, a8);
LABEL_7:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F349E0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  v19 = a3;
  MEMORY[0x182771080]();
  goto LABEL_7;
}
