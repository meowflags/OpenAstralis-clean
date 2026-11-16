// NET_SockaddrEqualsInetAddress
// rva 0x132a9c64  size 290  section .text  group text
// window base 0x1932a9c64: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_SockaddrEqualsInetAddress(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  _QWORD *v21; // rdi
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // edi
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  _BYTE v34[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-38h]

  v8 = sub_132AA190(a1: a4, a2: a3, a3: a5, a4, a5, a6, a7: v31, a8: v32);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v7 + 1824LL))(
         a1: v7,
         a2: v9,
         a3: *(_QWORD *)(*(_QWORD *)v7 + 1824LL),
         a4: v7) == 0 )
  {
    if ( *(_WORD *)v12 == 23 )
    {
      v15 = v12 + 8;
      if ( (unsigned int)sub_1932AEB84(a1: v11, a2: v12, a3: v10, a4: v12 + 8) != 0 )
      {
        if ( v8 == 1 )
        {
          sub_1932AE968(a1: v11, a2: v12, a3: v10, a4: v15);
          v20 = sub_132AA110(a1: v16, a2: v17, a3: a5, a4: v16, a5: v18, a6: v19, a7: v31, a8: v32);
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD *))(*v21 + 1824LL))(
            a1: v21,
            a2: v20,
            a3: *v21,
            a4: v21);
        }
      }
      else if ( v8 != 1 )
      {
        sub_132A9FE4(a1: v11, a2: v12, a3: a5, a4: v11, a5: (unsigned int)v34, a6: v14, a7: v31, a8: v32, a9: v33);
        if ( (unsigned int)sub_1932AEB58(a1: v23, a2: v24, a3: v34, a4: v15) != 0 )
          sub_132AA0A0(a1: v11, a2: v12, a3: a5, a4: v11, a5: v13, a6: v14, a7: v31, a8: v32);
      }
    }
    else if ( v8 == 1 )
    {
      __imp_WS2_32.dll!#14(a1: v11, a2: v12, a3: v10, a4: *(unsigned int *)(v12 + 4));
      v29 = sub_132AA110(a1: v25, a2: v26, a3: a5, a4: v25, a5: v27, a6: v28, a7: v31, a8: v32);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v30 + 1824LL))(
        a1: v30,
        a2: v29,
        a3: *(_QWORD *)(*(_QWORD *)v30 + 1824LL),
        a4: v30);
    }
  }
  return sub_132C8DE0(a1: v11, a2: v12, a3: v10, a4: (unsigned __int64)&v31 ^ v35, a5: v13, a6: v14);
}
