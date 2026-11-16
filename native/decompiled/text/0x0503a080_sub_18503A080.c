// sub_18503A080
// rva 0x0503a080  size 109  section .text  group text
// window base 0x18503a080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18503A080(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  _DWORD *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD v13[3]; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+18h] [rbp-10h]
  __int64 v15; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v13 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    JUMPOUT(0x18503A0EDLL);
  }
  v8 = (__int64 (*)(void))(v5 + *(_QWORD *)&v6[2 * (*a3 >> 3) + 36]);
  v15 = a5;
  v14 = a3;
  result = (_DWORD *)v8();
  v13[2] = result;
  if ( result != v6 )
    result = (_DWORD *)sub_185038300(a1: v11, a2: v12, a3: result, a4: v10, a5: v14);
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
