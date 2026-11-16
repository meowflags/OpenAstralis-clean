// sub_503A1C0
// rva 0x0503a1c0  size 166  section .text  group text
// window base 0x18503a1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503A1C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  _QWORD v15[3]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v16; // [rsp+18h] [rbp-20h]
  __int64 v17; // [rsp+20h] [rbp-18h]
  unsigned int v18; // [rsp+2Ch] [rbp-Ch]
  __int64 v19; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x18503A266LL);
  }
  v19 = a6;
  v9 = (__int64 (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 144));
  v18 = *a3 >> 3;
  v17 = a5;
  v16 = a3;
  v10 = v9();
  v15[2] = v10;
  if ( v10 == v7 )
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                            + *(_QWORD *)(v7 + 8LL * v18 + 120)))(
               a1: v12,
               a2: v13,
               a3: v16,
               a4: v11,
               a5: v17,
               a6: v19);
  else
    result = sub_50395E0(a1: v12, a2: v13, a3: v10, a4: v11, a5: (__int64)v16, a6: v19);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
