// sub_18503F040
// rva 0x0503f040  size 158  section .text  group text
// window base 0x18503f040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503F040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503F0E0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v19 = a5;
      v18 = a3;
      v9 = MEMORY[0x181EAA920](a1, a2, a3: 43307800);
      a5 = v19;
      a3 = v18;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 16;
      *(_DWORD *)v9 = 43307800;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
    }
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(a5 - v7) >> 3;
    v19 = a5;
    v18 = a3;
    result = sub_18503F0E0(a1, a2, a3, a4: a3, a5: v9, a6, a7: v17);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
