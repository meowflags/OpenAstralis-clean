// NET_ThrowNew
// rva 0x132aed0c  size 280  section .text  group text
// window base 0x1932aed0c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_ThrowNew(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  __int64 i; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // edi
  int v16; // esi
  int v17; // r9d
  int v19; // [rsp+0h] [rbp-258h] BYREF
  int v20; // [rsp+8h] [rbp-250h]
  __int64 v21; // [rsp+10h] [rbp-248h]
  __int64 v22; // [rsp+18h] [rbp-240h]
  __int64 v23; // [rsp+20h] [rbp-238h]
  _BYTE v24[256]; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v25[256]; // [rsp+130h] [rbp-128h] BYREF
  __int64 v26; // [rsp+230h] [rbp-28h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 1824LL))(a1: a5, a2: a4) == 0 )
  {
    if ( v7 == 0 )
      JUMPOUT(0x326508D5ALL);
    v11 = 0;
    for ( i = 539216; i < 540296; i += 24 )
    {
      if ( a3 == *(_DWORD *)i )
        break;
      ++v11;
    }
    v23 = v7;
    if ( v11 >= 45 )
    {
      jio_snprintf(
        a1: v7,
        a2: v8,
        a3: 256,
        a4: (unsigned int)v24,
        a5: 541792,
        a6: a3,
        a7: v19,
        a8: v20,
        a9: v21,
        a10: v22);
    }
    else
    {
      jio_snprintf(
        a1: *(_QWORD *)(24LL * v11 + 0x83A58),
        a2: v8,
        a3: 256,
        a4: (unsigned int)v24,
        a5: 541784,
        a6: *(_QWORD *)(24LL * v11 + 0x83A60),
        a7: v19,
        a8: v20,
        a9: v21,
        a10: v22);
      if ( v13 != 0 )
      {
LABEL_11:
        v23 = v13;
        sub_1329EDE0(a1: v13, a2: v14, a3: 256, a4: (__int64)v25, a5: 541868);
        JNU_ThrowByName(a1: v15, a2: v16, a3: (unsigned int)v25, a4: v16, a5: (unsigned int)v24, a6: v17);
        return sub_132C8DE0(a1: v7, a2: v8, a3: v6, a4: (unsigned __int64)&v19 ^ v26, a5: v9, a6: v10);
      }
    }
    v13 = 541840;
    goto LABEL_11;
  }
  return sub_132C8DE0(a1: v7, a2: v8, a3: v6, a4: (unsigned __int64)&v19 ^ v26, a5: v9, a6: v10);
}
