// ZIP_GZip_Fully
// rva 0x132be89c  size 298  section .text  group text
// window base 0x1932be89c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall ZIP_GZip_Fully(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        __int64 a14,
        __int64 *a15)
{
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // edi
  int v23; // r8d
  int v24; // r9d
  int v25; // esi
  int v26; // edi
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // eax
  int v30; // edx
  int v31; // edi
  __int64 *v32; // rsi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v37; // [rsp+0h] [rbp-C1h]
  __int64 v38; // [rsp+8h] [rbp-B9h]
  __int64 v39; // [rsp+10h] [rbp-B1h]
  _QWORD v40[2]; // [rsp+20h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+30h] [rbp-91h] BYREF
  int v42; // [rsp+38h] [rbp-89h]
  __int64 v43; // [rsp+40h] [rbp-81h]
  int v44; // [rsp+48h] [rbp-79h]
  unsigned int v45; // [rsp+4Ch] [rbp-75h]
  __int64 (__fastcall *v46)(); // [rsp+60h] [rbp-61h]
  __int64 (__fastcall *v47)(); // [rsp+68h] [rbp-59h]
  _QWORD *v48; // [rsp+70h] [rbp-51h]
  _BYTE v49[48]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-1h]

  v40[0] = a11;
  v18 = 0;
  v40[1] = a12 + a11;
  sub_1932CA161(a1: a6, a2, a3: 0, a4: &v41, a5: 88);
  v46 = sub_1932C0788;
  v47 = nullsub_1;
  v48 = v40;
  v21 = sub_1932BF530(a1: v19, a2: v20, a3: a13, a4: &v41);
  v25 = (int)a15;
  *a15 = v21;
  if ( v21 == 0 )
  {
    v44 = v22;
    v26 = a14;
    v43 = a5;
    v41 = a4;
    v42 = a3;
    if ( a14 != 0 )
    {
      sub_1932CA161(a1: a14, a2: a15, a3: 0, a4: v49, a5: 72);
      v50 = v27;
      sub_1932C39A8(a1: v27, a2: v28, a3: v49, a4: &v41);
    }
    v29 = sub_1932C2690(a1: v26, a2: v25, a3: 4, a4: (unsigned int)&v41, a5: v23, a6: v24);
    if ( v29 == 0 || v29 == -5 )
    {
      v35 = 548112;
    }
    else
    {
      if ( v29 == 1 )
      {
        v18 = v45;
LABEL_11:
        sub_1932C3208(
          a1: v31,
          a2: (_DWORD)v32,
          a3: v30,
          a4: (unsigned int)&v41,
          a5: v33,
          a6: v34,
          a7: v37,
          a8: v38,
          a9: v39);
        return v18;
      }
      v35 = 548136;
    }
    *v32 = v35;
    goto LABEL_11;
  }
  return v18;
}
