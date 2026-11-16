// sub_18503EFA0
// rva 0x0503efa0  size 158  section .text  group text
// window base 0x18503efa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503EFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503F040();
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
    {
      v12 = a5;
      v11 = a3;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 40608200);
      a5 = v12;
      a3 = v11;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 16;
      *(_DWORD *)v8 = 40608200;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(a5 - v6) >> 3;
    v12 = a5;
    v11 = a3;
    result = sub_18503F0E0(a1, a2, a3, a4: a3, a5: v8, a6, a7: v10);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
