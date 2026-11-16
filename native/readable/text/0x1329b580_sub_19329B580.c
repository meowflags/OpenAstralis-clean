// sub_1329B580
// rva 0x1329b580  size 428  section .text  group text
// window base 0x19329b580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329B580(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 (*v17)(void); // rcx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 result; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+20h] [rbp-28h]
  _DWORD *v32; // [rsp+28h] [rbp-20h]
  __int64 v33; // [rsp+30h] [rbp-18h]
  __int64 v34; // [rsp+38h] [rbp-10h]
  int v35; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v16 + 8) )
    JUMPOUT(0x19329B6E5LL);
  v17 = (__int64 (*)(void))(v14 + *(_QWORD *)(v15 + 8LL * (*a3 >> 3) + 112));
  v35 = *a3 >> 3;
  v34 = a6;
  v33 = a5;
  v32 = a3;
  v31 = v17();
  result = sub_1329B740(a1: v19, a2: v20, a3: v31, a4: v18, a5: v21, a6: v22, a7: v30);
  if ( result == v15 )
    return sub_19329B5DE(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( *(int *)(v16 + 16) <= 0 )
    JUMPOUT(0x19329B6DALL);
  return result;
}
