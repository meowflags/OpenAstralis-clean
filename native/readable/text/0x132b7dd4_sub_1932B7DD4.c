// sub_132B7DD4
// rva 0x132b7dd4  size 416  section .text  group text
// window base 0x1932b7dd4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7DD4(
        __int64 a1,
        _DWORD a2,
        __int64 a3,
        __int64 *a4,
        signed int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        int a14,
        int a15)
{
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 i; // rbp
  __int64 v26; // rbx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-2B8h] BYREF
  unsigned int v36; // [rsp+8h] [rbp-2B0h]
  _BYTE *v37; // [rsp+20h] [rbp-298h]
  int v38; // [rsp+28h] [rbp-290h]
  __int64 v39; // [rsp+30h] [rbp-288h]
  __int64 v40; // [rsp+40h] [rbp-278h]
  __int64 v41; // [rsp+48h] [rbp-270h]
  __int64 v42; // [rsp+50h] [rbp-268h]
  _BYTE v43[512]; // [rsp+60h] [rbp-258h] BYREF
  __int64 v44; // [rsp+260h] [rbp-58h]

  v40 = a11;
  v16 = *a4;
  v41 = a6;
  v42 = a3;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _QWORD))(v16 + 1320))(
          a1,
          a2: a4,
          a3,
          a4,
          a5: 0);
  v23 = v17;
  if ( v17 != 0 )
  {
    if ( a5 < 0 )
      a5 = sub_132B7580(a1: v19, a2: v20, a3: v18, a4: v17, a5: v21, a6: v22, a7: v35, a8: v36);
    if ( a5 != -1 )
    {
      v19 = ~(a14 << 13) & 0x10000000;
      if ( a13 > 0 )
      {
        for ( i = 0; i < a13; ++i )
        {
          v26 = 4 * i;
          if ( a15 != 0
            && (v39 = 0,
                v38 = 256,
                v27 = *(_DWORD *)(v26 + v40) | v19,
                v37 = v43,
                (unsigned int)sub_132B75F0(a1: v19, a2: v20, a3: a5, a4: v23, a5: 0, a6: v27) != 0)
            || (unsigned int)sub_132B79F4(
                               a1: v19,
                               a2: v20,
                               a3: *(_DWORD *)(v26 + v40) | (unsigned int)v19,
                               a4: v23,
                               a5: (__int64)v43,
                               a6: 0x100u) != 0 )
          {
            v29 = *(_QWORD *)v20;
            v30 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v19, a2: v20, a3: v28, a4: v43);
            v33 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(v29 + 1304))(
                    a1: v31,
                    a2: v32,
                    a3: v43,
                    a4: v32,
                    a5: v30);
            if ( v33 != 0 )
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v20 + 1392LL))(
                a1: v19,
                a2: v20,
                a3: v41,
                a4: v20,
                a5: a12,
                a6: v33);
          }
          ++a12;
        }
      }
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v20 + 1328LL))(
      a1: v19,
      a2: v20,
      a3: v42,
      a4: v20,
      a5: v23);
  }
  return sub_132C8DE0(a1: v19, a2: v20, a3: v18, a4: (unsigned __int64)&v35 ^ v44, a5: v21, a6: v22);
}
