// NET_InetAddressToSockaddr
// rva 0x132ae988  size 462  section .text  group text
// window base 0x1932ae988: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_InetAddressToSockaddr(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int16 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        char a12)
{
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r9d
  int v27; // r15d
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int16 v34; // ax
  __int64 v35; // rdi
  __int64 v36; // rsi
  unsigned int v38; // eax
  __int64 v39; // rdi
  __int16 v40; // ax
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v46[10]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v47; // [rsp+2Ah] [rbp-4Eh]
  char v48; // [rsp+2Ch] [rbp-4Ch]
  char v49; // [rsp+2Dh] [rbp-4Bh]
  char v50; // [rsp+2Eh] [rbp-4Ah]
  char v51; // [rsp+2Fh] [rbp-49h]
  __int64 v52; // [rsp+30h] [rbp-48h]

  v15 = sub_132AA190(a1: a6, a2, a3, (__int64)a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*a4 + 1824LL))(
         a1: v16,
         a2: v15,
         a3: *(_QWORD *)(*a4 + 1824LL),
         a4) != 0 )
    return sub_132C8DE0(a1: v18, a2: v19, a3: v17, a4: (unsigned __int64)&v45 ^ v52, a5: v20, a6: v21);
  sub_1932CA161(a1: v18, a2: v19, a3: 0, a4: v18, a5: 28);
  if ( (unsigned int)ipv6_available(a1: v22, a2: v23) == 0 )
  {
    if ( (_DWORD)v25 != 1 )
    {
      JNU_ThrowByName(a1: v24, a2: v25, a3: 534024, (_DWORD)a4, a5: 541880, a6: v26);
      return sub_132C8DE0(a1: v18, a2: v19, a3: v17, a4: (unsigned __int64)&v45 ^ v52, a5: v20, a6: v21);
    }
  }
  else if ( (_DWORD)v25 != 1 || a12 != 0 )
  {
    v27 = 0;
    if ( (_DWORD)v25 == 1 )
    {
      sub_1932CA161(a1: v24, a2: v25, a3: 0, a4: v46, a5: 16);
      v30 = sub_132AA110(a1: v28, a2: v29, a3, (__int64)a4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*a4 + 1824LL))(
             a1: v31,
             a2: v30,
             a3: *a4,
             a4) != 0 )
        return sub_132C8DE0(a1: v18, a2: v19, a3: v17, a4: (unsigned __int64)&v45 ^ v52, a5: v20, a6: v21);
      if ( (_DWORD)v19 != 0 )
      {
        v47 = -1;
        v48 = BYTE3(v19);
        v49 = BYTE2(v19);
        v50 = BYTE1(v19);
        v51 = v19;
      }
    }
    else
    {
      sub_132A9FE4(a1: v24, a2: v25, a3, (__int64)a4);
      v27 = sub_132AA0A0(a1: v32, a2: v33, a3, (__int64)a4);
    }
    v34 = __imp_WS2_32.dll!#9(a1: v18, a2: v19, a3: v17, a4: a5);
    *(_WORD *)(v35 + 2) = v34;
    sub_1932CA15B(a1: v35, a2: v36, a3: v46, a4: v35 + 8, a5: 16);
    *(_WORD *)v18 = 23;
    *(_DWORD *)(v18 + 24) = v27;
    if ( a11 != nullptr )
      *a11 = 28;
    return sub_132C8DE0(a1: v18, a2: v19, a3: v17, a4: (unsigned __int64)&v45 ^ v52, a5: v20, a6: v21);
  }
  v38 = sub_132AA110(a1: v24, a2: v25, a3, (__int64)a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*a4 + 1824LL))(
         a1: v39,
         a2: v38,
         a3: *(_QWORD *)(*a4 + 1824LL),
         a4) == 0 )
  {
    v40 = __imp_WS2_32.dll!#9(a1: v18, a2: v19, a3: v17, a4: a5);
    *(_WORD *)(v41 + 2) = v40;
    v44 = __imp_WS2_32.dll!#8(a1: v41, a2: v43, a3: v42, a4: (unsigned int)v43);
    *(_WORD *)v18 = 2;
    *(_DWORD *)(v18 + 4) = v44;
    if ( a11 != nullptr )
      *a11 = 16;
  }
  return sub_132C8DE0(a1: v18, a2: v19, a3: v17, a4: (unsigned __int64)&v45 ^ v52, a5: v20, a6: v21);
}
