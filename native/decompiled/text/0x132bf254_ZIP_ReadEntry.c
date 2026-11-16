// ZIP_ReadEntry
// rva 0x132bf254  size 418  section .text  group text
// window base 0x1932bf254: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall ZIP_ReadEntry(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 *v20; // rsi
  __int64 v21; // rdi
  int v23; // edi
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rbx
  int v32; // eax
  int v33; // [rsp+0h] [rbp-488h] BYREF
  __int64 v34; // [rsp+8h] [rbp-480h]
  __int64 v35; // [rsp+10h] [rbp-478h]
  __int64 v36; // [rsp+18h] [rbp-470h]
  _BYTE *v37; // [rsp+30h] [rbp-458h] BYREF
  _BYTE v38[1024]; // [rsp+40h] [rbp-448h] BYREF
  __int64 v39; // [rsp+440h] [rbp-48h]

  if ( a3 == nullptr )
  {
    v8 = MEMORY[0x79BF8](a1, a2: a4, a3: 0, a4: 2);
    sub_1932C8AA0(a1: v9, a2: v10, a3: 547832, a4: v8, a5: v11, a6: v12, a7: v33, a8: v34, a9: v35, a10: v36);
    return sub_1932C8DE0(a1: v14, a2: v15, a3: v13, a4: (unsigned __int64)&v33 ^ v39, a5: v16, a6: v17);
  }
  sub_1932CA27B(a1, a2: a4, a3: *a3, a4: a6);
  if ( a3[3] == 0 )
  {
    v21 = 0;
    if ( (__int64)a3[2] > 0 )
      sub_1932C8CD0(a1: 0, a2: v20, a3: v18, a4: v20[7]);
LABEL_7:
    ZIP_FreeEntry(a1: v21, a2: (__int64)v20, (__int64)a3, a4: (__int64)v20);
  }
  if ( (unsigned __int8)sub_1932BE44C(a1: v19, a2: (__int64)v20, (__int64)a3, a4: (__int64)v20, a5, a6: &v37) != 0 )
    goto LABEL_7;
  v27 = v37;
  if ( v37 == nullptr || *v37 == 0 )
    v27 = (_BYTE *)v20[10];
  if ( v27 == nullptr )
  {
    v28 = (unsigned int *)MEMORY[0x79B48](a1: 0, a2: v20, a3: v25, a4: v26);
    sub_1932B8ABC(a1: v29, a2: v30, a3: v38, a4: *v28, a5: 1024);
    v27 = v38;
  }
  v31 = *v20;
  v32 = MEMORY[0x79BF8](a1: v27, a2: v20, a3: v25, a4: 2);
  sub_1932C8AA0(a1: v23, a2: v24, a3: 547856, a4: v32, a5: v31, a6: v23, a7: v33, a8: v34, a9: v35, a10: v36);
  return sub_1932C8DE0(a1: v14, a2: v15, a3: v13, a4: (unsigned __int64)&v33 ^ v39, a5: v16, a6: v17);
}
