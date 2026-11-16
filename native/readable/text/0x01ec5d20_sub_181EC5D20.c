// sub_1EC5D20
// rva 0x01ec5d20  size 96  section .text  group text
// window base 0x181ec5d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC5D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v18);
    return sub_1EC5D80(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v9 != 0 )
    {
      v20 = a3;
      v10 = *(unsigned int *)(v7 + 8 * v9 + 8);
      v19 = v7 + 8 * v9;
      result = sub_631FBE0(a1: 1, a2, a3: v19, a4, a5: 0, a6: v10);
    }
    else
    {
      result = 0;
      v20 = a3;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
