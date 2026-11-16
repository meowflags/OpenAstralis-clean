// sub_1932B7680
// rva 0x132b7680  size 685  section .text  group text
// window base 0x1932b7680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B7680(
        _DWORD a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rax
  __int64 v13; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int16 v24; // cx
  _WORD *v25; // rdx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, __int64, __int64, __int64 *, __int64, _QWORD); // rbx
  __int64 (__fastcall *v32)(__int64, _QWORD, __int64, __int64 *); // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  _WORD *v36; // r15
  __int64 v37; // rax
  _WORD *v38; // r13
  __int64 v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rax
  void (__fastcall *v43)(_QWORD, __int64, __int64, __int64 *, _QWORD, __int64); // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  void (__fastcall *v52)(__int64, __int64, __int64, __int64 *, _QWORD, __int64); // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v57; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v58; // [rsp+8h] [rbp-F8h]
  int v59; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  unsigned int v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+44h] [rbp-BCh]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  _WORD v66[256]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+260h] [rbp+160h]

  v11 = *a4;
  v13 = a11;
  v62 = a5;
  v65 = a3;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *, _QWORD))(v11 + 1320))(a1: a5, a2, a3, a4, a5: 0);
  v61 = v15;
  if ( v15 != 0 )
  {
    v66[0] = 0;
    v21 = (a6 & 1) != 0 ? 57 : 4;
    v63 = v21;
    if ( (int)v17 < 0 )
    {
      v22 = sub_1932B7580(a1: v17, a2: v18, a3: v16, a4: v15, a5: v19, a6: v20, a7: v57, a8: v58);
      v17 = v22;
      v62 = v22;
      v15 = v61;
    }
    if ( (_DWORD)v17 != -1 )
    {
      v59 = 256;
      if ( (unsigned int)sub_1932B7500(a1: v17, a2: v18, a3: v17, a4: v15, a5: v21, a6: (__int64)v66) != 0 )
      {
        v24 = v66[0];
        v25 = v66;
        while ( v24 != 0 )
        {
          v26 = v24 == 44;
          v24 = *++v25;
          if ( v26 )
            JUMPOUT(0x326511767LL);
        }
        v27 = *a4;
        if ( a11 != 0 )
        {
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(v27 + 1368))(
                  a1: v23,
                  a2: 0,
                  a3: a11,
                  a4);
          v60 = v29;
LABEL_13:
          v36 = v66;
          if ( (int)v18 > 0 )
          {
            v37 = (unsigned int)v18;
            v38 = v66;
            v64 = (unsigned int)v18;
            do
            {
              while ( *v36 != 44 )
                ++v36;
              *v36++ = 0;
              if ( (int)v18 < v29 && *v38 != 0 )
              {
                v39 = *a4;
                v40 = MEMORY[0x79CB0](a1: v30, a2: v18, a3: v28, a4: v38);
                v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, _WORD *, __int64 *, _QWORD))(v39 + 1304))(
                        a1: *(_QWORD *)(v39 + 1392),
                        a2: v41,
                        a3: v38,
                        a4,
                        a5: v40);
                v43(a1: v43, a2: v44, a3: v13, a4, a5: (unsigned int)v44, a6: v42);
                v37 = v64;
                v29 = v60;
              }
              v18 = (unsigned int)(v18 - 1);
              v38 = v36;
              v64 = --v37;
            }
            while ( v37 != 0 );
            v21 = v63;
            LODWORD(v30) = v62;
          }
          v26 = (_DWORD)v30 == 3;
          v45 = v61;
          if ( v26 )
          {
            v66[0] = 0;
            v59 = 256;
            if ( (unsigned int)sub_1932B7500(a1: v61, a2: v18, a3: 1u, a4: v61, a5: v21, a6: (__int64)v66) != 0 )
            {
              v47 = MEMORY[0x79CB0](a1: v45, a2: v18, a3: v46, a4: v66);
              v51 = 2LL * v47 - 2;
              if ( v51 >= 0x200 )
              {
                sub_1932C925C(a1: v49, a2: v50, a3: v48);
                JUMPOUT(0x1932B792CLL);
              }
              *(_WORD *)((char *)v66 + v51) = 0;
              v52 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD, __int64))(*a4 + 1392);
              v53 = (*(__int64 (__fastcall **)(__int64, __int64, _WORD *, __int64 *, _QWORD))(*a4 + 1304))(
                      a1: v49,
                      a2: v50,
                      a3: v66,
                      a4,
                      a5: (unsigned int)(v47 - 1));
              v52(a1: v54, a2: v55, a3: v13, a4, a5: 0, a6: v53);
            }
          }
          goto LABEL_27;
        }
        v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64, _QWORD))(v27 + 1376);
        v32 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(v27 + 48);
        v60 = 1;
        v33 = v32(a1: v23, a2: 0, a3: 543272, a4);
        v13 = v31(a1: v34, a2: v35, a3: 1, a4, a5: v33, a6: 0);
        if ( v13 != 0 )
        {
          v29 = 1;
          goto LABEL_13;
        }
      }
    }
    v45 = v61;
LABEL_27:
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64))(*a4 + 1328))(
      a1: v45,
      a2: v18,
      a3: v65,
      a4,
      a5: v45);
  }
  return sub_1932C8DE0(a1: v17, a2: v18, a3: v16, a4: (unsigned __int64)&v57 ^ v67, a5: v19, a6: v20);
}
