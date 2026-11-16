// ZIP_GZip_InitParams
// rva 0x132be9c8  size 161  section .text  group text
// window base 0x1932be9c8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall ZIP_GZip_InitParams(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rsi
  int v15; // edx
  int v16; // edi
  int v17; // r8d
  int v18; // r9d
  __int64 v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  _BYTE v23[48]; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+50h] [rbp-38h]
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-30h]
  _QWORD *v26; // [rsp+60h] [rbp-28h]

  *a5 = 0;
  sub_1932CA161(a1: a6, a2: a3, a3: 0, a4: v23, a5: 88);
  v26 = a5;
  v24 = sub_1932C0638;
  v25 = sub_1932C0654;
  v10 = sub_1932BF530(a1: v8, a2: v9, a3: (unsigned int)v8, a4: v23);
  if ( v10 == 0 )
  {
    v13 = sub_1932C3074(a1: v11, a2: v12, a3: a4, a4: v23);
    *v14 = v13;
    sub_1932C3208(a1: v16, a2: (_DWORD)v14, a3: v15, a4: (unsigned int)v23, a5: v17, a6: v18, a7: v20, a8: v21, a9: v22);
  }
  return v10;
}
