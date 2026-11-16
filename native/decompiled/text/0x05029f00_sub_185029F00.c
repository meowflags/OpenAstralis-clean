// sub_185029F00
// rva 0x05029f00  size 158  section .text  group text
// window base 0x185029f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185029F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185029FA0(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15, a7);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v19 = a5;
      v18 = a3;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 39410144);
      a5 = v19;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 39410144;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      v18 = a3;
    }
    v19 = a5;
    v17 = v8;
    MEMORY[0x18500F140](a1, a2, a3: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v17;
  }
}
