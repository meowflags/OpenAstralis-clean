// Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_getCredentialsHandle
// rva 0x132adf9c  size 455  section .text  group text
// window base 0x1932adf9c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_getCredentialsHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  _BYTE v21[4]; // [rsp+50h] [rbp-11h] BYREF
  int v22; // [rsp+54h] [rbp-Dh]
  __int64 v23; // [rsp+60h] [rbp-1h] BYREF
  int v24; // [rsp+68h] [rbp+7h]
  __int64 v25; // [rsp+70h] [rbp+Fh]
  int v26; // [rsp+78h] [rbp+17h]
  __int64 v27; // [rsp+80h] [rbp+1Fh]
  int v28; // [rsp+88h] [rbp+27h]
  int v29; // [rsp+8Ch] [rbp+2Bh]

  v22 = -2146893052;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( a5 == 0 || (result = JNU_GetStringPlatformCharsStrict(a1: 0, a2: 0, a3: a5, a4, a5: v21), v13 = result, result != 0) )
  {
    if ( (a6 == 0 || (v14 = JNU_GetStringPlatformCharsStrict(a1: v14, a2: v15, a3: a6, a4, a5: v21)) != 0)
      && (a11 == 0 || (v15 = JNU_GetStringPlatformCharsStrict(a1: v14, a2: v15, a3: a11, a4, a5: v21)) != 0) )
    {
      v17 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v14, a2: v15, a3, a4: 16);
      if ( v17 != 0 )
      {
        if ( v13 != 0 || v19 != 0 || v18 != 0 )
        {
          sub_1932CA161(a1: v18, a2: v19, a3: 0, a4: &v23, a5: 48);
          if ( v13 != 0 )
          {
            v23 = v13;
            v24 = sub_1932CA1FD(a1: v18, a2: v19, a3: v20, a4: v13);
          }
          if ( v19 != 0 )
          {
            v27 = v19;
            v28 = sub_1932CA1FD(a1: v18, a2: v19, a3: v20, a4: v19);
          }
          if ( v18 != 0 )
          {
            v25 = v18;
            v26 = sub_1932CA1FD(a1: v18, a2: v19, a3: v20, a4: v18);
          }
          v29 = 1;
        }
        v22 = sub_1932CA323(a1: v18, a2: v19, a3: 539156, a4: 0, a5: 2);
      }
      else
      {
        JNU_ThrowOutOfMemoryError(a1: v18, a2: v19, a3: 533920, a4);
      }
    }
    else
    {
      v17 = a5;
    }
    if ( v13 != 0 )
      JNU_ReleaseStringPlatformChars(a1: v14, a2: v15, a3: a5, a4, a5: v13);
    if ( v15 != 0 )
      JNU_ReleaseStringPlatformChars(a1: v14, a2: v15, a3: a11, a4, a5: v15);
    if ( v14 != 0 )
      JNU_ReleaseStringPlatformChars(a1: v14, a2: v15, a3: a6, a4, a5: v14);
    if ( v22 != 0 )
      JUMPOUT(0x326508144LL);
    return v17;
  }
  return result;
}
